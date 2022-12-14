#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "display/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_MDI_SINE_WAVE
#define LV_ATTRIBUTE_IMG_MDI_SINE_WAVE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_MDI_SINE_WAVE uint8_t mdi_sine_wave_map[] = {
  0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 
  0x07, 0x80, 0x00, 
  0x0f, 0xc0, 0x00, 
  0x0c, 0xe0, 0x00, 
  0x18, 0x60, 0x00, 
  0x18, 0x30, 0x00, 
  0x30, 0x30, 0x00, 
  0x30, 0x30, 0x00, 
  0x30, 0x18, 0x00, 
  0x30, 0x18, 0x00, 
  0x00, 0x18, 0x0c, 
  0x00, 0x18, 0x0c, 
  0x00, 0x0c, 0x0c, 
  0x00, 0x0c, 0x0c, 
  0x00, 0x0e, 0x18, 
  0x00, 0x06, 0x18, 
  0x00, 0x07, 0x30, 
  0x00, 0x03, 0xf0, 
  0x00, 0x01, 0xc0, 
  0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 
};

const lv_img_dsc_t mdi_sine_wave = {
  .header.cf = LV_IMG_CF_ALPHA_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 24,
  .header.h = 24,
  .data_size = 72,
  .data = mdi_sine_wave_map,
};
