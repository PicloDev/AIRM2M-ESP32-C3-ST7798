/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_Screen1_homepage(lv_ui *ui){

	//Write codes Screen1_homepage
	ui->Screen1_homepage = lv_obj_create(NULL);
	lv_obj_set_scrollbar_mode(ui->Screen1_homepage, LV_SCROLLBAR_MODE_OFF);

	//Set style for Screen1_homepage. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_bg_color(ui->Screen1_homepage, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Screen1_homepage, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Screen1_homepage, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Screen1_homepage, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Screen1_homepage_label_1
	ui->Screen1_homepage_label_1 = lv_label_create(ui->Screen1_homepage);
	lv_obj_set_pos(ui->Screen1_homepage_label_1, 21, 55);
	lv_obj_set_size(ui->Screen1_homepage_label_1, 202, 52);
	lv_obj_set_scrollbar_mode(ui->Screen1_homepage_label_1, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->Screen1_homepage_label_1, "ForeThoughtSpineMaster");
	lv_label_set_long_mode(ui->Screen1_homepage_label_1, LV_LABEL_LONG_WRAP);

	//Set style for Screen1_homepage_label_1. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->Screen1_homepage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Screen1_homepage_label_1, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Screen1_homepage_label_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Screen1_homepage_label_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Screen1_homepage_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Screen1_homepage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Screen1_homepage_label_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Screen1_homepage_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Screen1_homepage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Screen1_homepage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Screen1_homepage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Screen1_homepage_label_1, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Screen1_homepage_label_1, &lv_font_ArchitectsDaughter_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Screen1_homepage_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Screen1_homepage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Screen1_homepage_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Screen1_homepage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Screen1_homepage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Screen1_homepage_label_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Screen1_homepage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Screen1_homepage_qrcode_1
	ui->Screen1_homepage_qrcode_1 = lv_qrcode_create(ui->Screen1_homepage, 100, lv_color_make(0x3f, 0x36, 0x36), lv_color_make(0xff, 0xff, 0xff));
	const char * Screen1_homepage_qrcode_1_data = "http://www.forethought.cn/";
	lv_qrcode_update(ui->Screen1_homepage_qrcode_1, Screen1_homepage_qrcode_1_data, strlen(Screen1_homepage_qrcode_1_data));
	lv_obj_set_pos(ui->Screen1_homepage_qrcode_1, 70, 113);
	lv_obj_set_size(ui->Screen1_homepage_qrcode_1, 100, 100);

	//Write codes Screen1_homepage_Blueconnect_image
	ui->Screen1_homepage_Blueconnect_image = lv_img_create(ui->Screen1_homepage);
	lv_obj_set_pos(ui->Screen1_homepage_Blueconnect_image, 183, 9);
	lv_obj_set_size(ui->Screen1_homepage_Blueconnect_image, 40, 40);
	lv_obj_set_scrollbar_mode(ui->Screen1_homepage_Blueconnect_image, LV_SCROLLBAR_MODE_OFF);

	//Set style for Screen1_homepage_Blueconnect_image. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_img_recolor(ui->Screen1_homepage_Blueconnect_image, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor_opa(ui->Screen1_homepage_Blueconnect_image, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Screen1_homepage_Blueconnect_image, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Screen1_homepage_Blueconnect_image, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Screen1_homepage_Blueconnect_image,&_lanya1_alpha_40x40);
	lv_img_set_pivot(ui->Screen1_homepage_Blueconnect_image, 50,50);
	lv_img_set_angle(ui->Screen1_homepage_Blueconnect_image, 0);

	//Write codes Screen1_homepage_Bluedisconnect_image
	ui->Screen1_homepage_Bluedisconnect_image = lv_img_create(ui->Screen1_homepage);
	lv_obj_set_pos(ui->Screen1_homepage_Bluedisconnect_image, 130, 9);
	lv_obj_set_size(ui->Screen1_homepage_Bluedisconnect_image, 40, 40);
	lv_obj_set_scrollbar_mode(ui->Screen1_homepage_Bluedisconnect_image, LV_SCROLLBAR_MODE_OFF);

	//Set style for Screen1_homepage_Bluedisconnect_image. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_img_recolor(ui->Screen1_homepage_Bluedisconnect_image, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor_opa(ui->Screen1_homepage_Bluedisconnect_image, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Screen1_homepage_Bluedisconnect_image, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Screen1_homepage_Bluedisconnect_image, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Screen1_homepage_Bluedisconnect_image,&_lanya2_alpha_40x40);
	lv_img_set_pivot(ui->Screen1_homepage_Bluedisconnect_image, 50,50);
	lv_img_set_angle(ui->Screen1_homepage_Bluedisconnect_image, 0);
}