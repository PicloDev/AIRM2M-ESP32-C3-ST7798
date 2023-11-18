/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"
#include "guider_fonts.h"

typedef struct
{
	lv_obj_t *Screen1_homepage;
	bool Screen1_homepage_del;
	lv_obj_t *Screen1_homepage_label_1;
	lv_obj_t *Screen1_homepage_qrcode_1;
	lv_obj_t *Screen1_homepage_Blueconnect_image;
	lv_obj_t *Screen1_homepage_Bluedisconnect_image;
	lv_obj_t *Screen2_Loading;
	bool Screen2_Loading_del;
	lv_obj_t *Screen2_Loading_label_2;
	lv_obj_t *Screen2_Loading_bar_1;
	lv_obj_t *Screen2_Loading_img_1;
}lv_ui;

void ui_init_style(lv_style_t * style);
void init_scr_del_flag(lv_ui *ui);
void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_Screen1_homepage(lv_ui *ui);
void setup_scr_Screen2_Loading(lv_ui *ui);
LV_IMG_DECLARE(_1630548437136_alpha_146x49);
LV_IMG_DECLARE(_lanya2_alpha_40x40);
LV_IMG_DECLARE(_lanya1_alpha_40x40);

#ifdef __cplusplus
}
#endif
#endif