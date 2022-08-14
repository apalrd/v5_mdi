#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "display/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_MDI_RESTORE
#define LV_ATTRIBUTE_IMG_MDI_RESTORE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_MDI_RESTORE uint8_t mdi_restore_map[] = {
  0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 
  0x00, 0x3f, 0x00, 
  0x00, 0xff, 0xc0, 
  0x01, 0xc0, 0xe0, 
  0x03, 0x80, 0x70, 
  0x07, 0x00, 0x38, 
  0x06, 0x00, 0x18, 
  0x0c, 0x00, 0x0c, 
  0x0c, 0x00, 0x0c, 
  0x0c, 0x00, 0x0c, 
  0x3f, 0x00, 0x0c, 
  0x1e, 0x00, 0x0c, 
  0x0c, 0x00, 0x0c, 
  0x00, 0x00, 0x18, 
  0x00, 0x00, 0x38, 
  0x00, 0x80, 0x70, 
  0x01, 0xc0, 0xe0, 
  0x00, 0xff, 0xc0, 
  0x00, 0x3f, 0x00, 
  0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 
};

const lv_img_dsc_t mdi_restore = {
  .header.cf = LV_IMG_CF_ALPHA_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 24,
  .header.h = 24,
  .data_size = 72,
  .data = mdi_restore_map,
};
