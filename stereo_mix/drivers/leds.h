#pragma once

#include "../resources.h"
#include "stmlib/utils/dsp.h"
#include "stm32f0xx_hal_gpio.h"
#include <stm32f0xx_hal.h>

using namespace stereo_mix;
using namespace stmlib;

const uint8_t kNumChannels = 4;

static const uint16_t kGpioPins[] = { GPIO_PIN_7, GPIO_PIN_15, GPIO_PIN_13, GPIO_PIN_14 };
static GPIO_TypeDef* kGpioPorts[] = { GPIOB, GPIOB, GPIOC, GPIOC };

class Leds {
  public:
  Leds()
  {
    __HAL_RCC_GPIOB_CLK_ENABLE();
    __HAL_RCC_GPIOC_CLK_ENABLE();
    GPIO_InitTypeDef gpioInit;
    for (size_t i = 0; i < kNumChannels; i++) {
      gpioInit.Mode = GPIO_MODE_OUTPUT_PP;
      gpioInit.Pin = kGpioPins[i];
      gpioInit.Pull = GPIO_NOPULL;
      gpioInit.Speed = GPIO_SPEED_FREQ_MEDIUM;
      HAL_GPIO_Init(kGpioPorts[i], &gpioInit);

      intensities[i] = 0;
      blinking[i] = false;
    }
  }
  void Write()
  {
#ifdef DEBUG_PIN
    for (size_t i = 0; i < kNumChannels - 1; i++) {
#else
    for (size_t i = 0; i < kNumChannels; i++) {

#endif
      bool in_blink_phase = blink_counter > (0x2000 / 2) || !blinking[i];
      if (intensities[i] && lut_led_gamma[intensities[i] >> 8] >= pwm_counter && in_blink_phase) {
        kGpioPorts[i]->BSRR |= kGpioPins[i];
      } else {
        kGpioPorts[i]->BRR |= kGpioPins[i];
      }
    }
    pwm_counter++;
    blink_counter++;
    if(blink_counter > 0x2000) blink_counter = 0;
  }


  void set_intensity(uint8_t channel, uint16_t intensity)
  {
    if (channel >= kNumChannels)
      return;

    intensities[channel] = intensity;
  }
  void set_blinking(uint8_t channel, bool blink)
  {
    if (channel >= kNumChannels)
      return;
    blinking[channel] = blink;
  }

  private:
  uint8_t pwm_counter;
  uint16_t blink_counter;
  uint16_t intensities[kNumChannels];
  bool blinking[kNumChannels];
};
