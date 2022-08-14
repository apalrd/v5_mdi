#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "display/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_MDI_CONTENT_SAVE_SETTINGS
#define LV_ATTRIBUTE_IMG_MDI_CONTENT_SAVE_SETTINGS
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_MDI_CONTENT_SAVE_SETTINGS uint8_t mdi_content_save_settings_map[] = {
  0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 
  0x0f, 0xff, 0x80, 
  0x1f, 0xff, 0xc0, 
  0x18, 0x01, 0xf0, 
  0x18, 0x01, 0xf8, 
  0x18, 0x01, 0xf8, 
  0x18, 0x01, 0xf8, 
  0x1f, 0xff, 0xf8, 
  0x1f, 0xff, 0xf8, 
  0x1f, 0xff, 0xf8, 
  0x1f, 0xff, 0xf8, 
  0x1f, 0xc3, 0xf8, 
  0x1f, 0x81, 0xf8, 
  0x1f, 0x81, 0xf8, 
  0x1f, 0x81, 0xf8, 
  0x1f, 0x81, 0xf8, 
  0x1f, 0xc3, 0xf8, 
  0x1f, 0xff, 0xf8, 
  0x0f, 0xff, 0xf0, 
  0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 
  0x01, 0x99, 0x80, 
  0x01, 0x99, 0x80, 
};

const lv_img_dsc_t mdi_content_save_settings = {
  .header.cf = LV_IMG_CF_ALPHA_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 24,
  .header.h = 24,
  .data_size = 72,
  .data = mdi_content_save_settings_map,
};
