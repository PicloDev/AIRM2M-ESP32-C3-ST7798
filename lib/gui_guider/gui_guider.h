/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */
#warning hbegin
#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C"
{
#endif

#include "lvgl.h"
#include "guider_fonts.h"

	typedef struct
	{
		lv_obj_t *screen;
		bool screen_del;
		lv_obj_t *screen_qrcode_1;
		lv_obj_t *screen_label_1;
		lv_obj_t *screen_img_1;
		lv_obj_t *screen_img_2;
		lv_obj_t *screen_1;
		bool screen_1_del;
		lv_obj_t *screen_1_label_2;
		lv_obj_t *screen_1_spinner_1;
	} lv_ui;

	void ui_init_style(lv_style_t *style);
	void init_scr_del_flag(lv_ui *ui);
	void setup_ui(lv_ui *ui);
	extern lv_ui guider_ui;
	void setup_scr_screen(lv_ui *ui);
	void setup_scr_screen_1(lv_ui *ui);
	LV_IMG_DECLARE(_bluetoothoff_alpha_40x40);
	LV_IMG_DECLARE(_bluetoothon_alpha_40x40);

#ifdef __cplusplus
}

#warning hend
#endif
#endif