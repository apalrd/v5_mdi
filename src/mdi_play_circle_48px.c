#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "display/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_MDI_PLAY_CIRCLE_48PX
#define LV_ATTRIBUTE_IMG_MDI_PLAY_CIRCLE_48PX
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_MDI_PLAY_CIRCLE_48PX uint8_t mdi_play_circle_48px_map[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x03, 0xff, 0xff, 0xc0, 0x00, 
  0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 
  0x00, 0x1f, 0xff, 0xff, 0xf8, 0x00, 
  0x00, 0x3f, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x7f, 0xff, 0xff, 0xfe, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x01, 0xff, 0xff, 0xff, 0xff, 0x80, 
  0x03, 0xff, 0xff, 0xff, 0xff, 0xc0, 
  0x03, 0xff, 0xf7, 0xff, 0xff, 0xc0, 
  0x07, 0xff, 0xf3, 0xff, 0xff, 0xe0, 
  0x07, 0xff, 0xf1, 0xff, 0xff, 0xe0, 
  0x07, 0xff, 0xf0, 0x7f, 0xff, 0xe0, 
  0x07, 0xff, 0xf0, 0x3f, 0xff, 0xe0, 
  0x0f, 0xff, 0xf0, 0x1f, 0xff, 0xf0, 
  0x0f, 0xff, 0xf0, 0x07, 0xff, 0xf0, 
  0x0f, 0xff, 0xf0, 0x03, 0xff, 0xf0, 
  0x0f, 0xff, 0xf0, 0x01, 0xff, 0xf0, 
  0x0f, 0xff, 0xf0, 0x01, 0xff, 0xf0, 
  0x0f, 0xff, 0xf0, 0x03, 0xff, 0xf0, 
  0x0f, 0xff, 0xf0, 0x07, 0xff, 0xf0, 
  0x0f, 0xff, 0xf0, 0x1f, 0xff, 0xf0, 
  0x07, 0xff, 0xf0, 0x3f, 0xff, 0xe0, 
  0x07, 0xff, 0xf0, 0x7f, 0xff, 0xe0, 
  0x07, 0xff, 0xf1, 0xff, 0xff, 0xe0, 
  0x07, 0xff, 0xf3, 0xff, 0xff, 0xe0, 
  0x03, 0xff, 0xf7, 0xff, 0xff, 0xc0, 
  0x03, 0xff, 0xff, 0xff, 0xff, 0xc0, 
  0x01, 0xff, 0xff, 0xff, 0xff, 0x80, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x7f, 0xff, 0xff, 0xfe, 0x00, 
  0x00, 0x3f, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x1f, 0xff, 0xff, 0xf8, 0x00, 
  0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 
  0x00, 0x03, 0xff, 0xff, 0xc0, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t mdi_play_circle_48px = {
  .header.cf = LV_IMG_CF_ALPHA_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 48,
  .header.h = 48,
  .data_size = 288,
  .data = mdi_play_circle_48px_map,
};