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

static lv_obj_t * g_kb_Screen2_Loading;
static void kb_Screen2_Loading_event_cb(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	lv_obj_t *kb = lv_event_get_target(e);
	if(code == LV_EVENT_READY || code == LV_EVENT_CANCEL){
		lv_obj_add_flag(kb, LV_OBJ_FLAG_HIDDEN);
	}
}
__attribute__((unused)) static void ta_Screen2_Loading_event_cb(lv_event_t *e)
{

	lv_event_code_t code = lv_event_get_code(e);
	lv_obj_t *ta = lv_event_get_target(e);
	lv_obj_t *kb = lv_event_get_user_data(e);
	if (code == LV_EVENT_FOCUSED || code == LV_EVENT_CLICKED)
	{
		lv_keyboard_set_textarea(kb, ta);
		lv_obj_move_foreground(kb);
		lv_obj_clear_flag(kb, LV_OBJ_FLAG_HIDDEN);
	}
	if (code == LV_EVENT_CANCEL || code == LV_EVENT_DEFOCUSED)
	{
		lv_keyboard_set_textarea(kb, NULL);
		lv_obj_move_background(kb);
		lv_obj_add_flag(kb, LV_OBJ_FLAG_HIDDEN);
	}
}

void setup_scr_Screen2_Loading(lv_ui *ui){

	//Write codes Screen2_Loading
	ui->Screen2_Loading = lv_obj_create(NULL);

	//Create keyboard on Screen2_Loading
	g_kb_Screen2_Loading = lv_keyboard_create(ui->Screen2_Loading);
	lv_obj_add_event_cb(g_kb_Screen2_Loading, kb_Screen2_Loading_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(g_kb_Screen2_Loading, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(g_kb_Screen2_Loading, &lv_font_simsun_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_scrollbar_mode(ui->Screen2_Loading, LV_SCROLLBAR_MODE_OFF);

	//Set style for Screen2_Loading. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_bg_color(ui->Screen2_Loading, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Screen2_Loading, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Screen2_Loading, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Screen2_Loading, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Screen2_Loading_label_2
	ui->Screen2_Loading_label_2 = lv_label_create(ui->Screen2_Loading);
	lv_obj_set_pos(ui->Screen2_Loading_label_2, 54, 161);
	lv_obj_set_size(ui->Screen2_Loading_label_2, 133, 32);
	lv_obj_set_scrollbar_mode(ui->Screen2_Loading_label_2, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->Screen2_Loading_label_2, "detecting");
	lv_label_set_long_mode(ui->Screen2_Loading_label_2, LV_LABEL_LONG_WRAP);

	//Set style for Screen2_Loading_label_2. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->Screen2_Loading_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Screen2_Loading_label_2, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Screen2_Loading_label_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Screen2_Loading_label_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Screen2_Loading_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Screen2_Loading_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Screen2_Loading_label_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Screen2_Loading_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Screen2_Loading_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Screen2_Loading_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Screen2_Loading_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Screen2_Loading_label_2, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Screen2_Loading_label_2, &lv_font_Amiko_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Screen2_Loading_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Screen2_Loading_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Screen2_Loading_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Screen2_Loading_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Screen2_Loading_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Screen2_Loading_label_2, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Screen2_Loading_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Screen2_Loading_bar_1
	ui->Screen2_Loading_bar_1 = lv_bar_create(ui->Screen2_Loading);
	lv_obj_set_pos(ui->Screen2_Loading_bar_1, 74, 207);
	lv_obj_set_size(ui->Screen2_Loading_bar_1, 92, 7);
	lv_obj_set_scrollbar_mode(ui->Screen2_Loading_bar_1, LV_SCROLLBAR_MODE_OFF);

	//Set style for Screen2_Loading_bar_1. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->Screen2_Loading_bar_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Screen2_Loading_bar_1, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Screen2_Loading_bar_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Screen2_Loading_bar_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Screen2_Loading_bar_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Screen2_Loading_bar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Screen2_Loading_bar_1, lv_color_make(0x96, 0x96, 0x96), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Screen2_Loading_bar_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Screen2_Loading_bar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Screen2_Loading_bar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Screen2_Loading_bar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Set style for Screen2_Loading_bar_1. Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->Screen2_Loading_bar_1, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Screen2_Loading_bar_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Screen2_Loading_bar_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Screen2_Loading_bar_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Screen2_Loading_bar_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_anim_time(ui->Screen2_Loading_bar_1, 1500, 0);
	lv_bar_set_mode(ui->Screen2_Loading_bar_1, LV_BAR_MODE_NORMAL);
	lv_bar_set_value(ui->Screen2_Loading_bar_1, 100, LV_ANIM_ON);

	//Write codes Screen2_Loading_img_1
	ui->Screen2_Loading_img_1 = lv_img_create(ui->Screen2_Loading);
	lv_obj_set_pos(ui->Screen2_Loading_img_1, 47, 61);
	lv_obj_set_size(ui->Screen2_Loading_img_1, 146, 49);
	lv_obj_set_scrollbar_mode(ui->Screen2_Loading_img_1, LV_SCROLLBAR_MODE_OFF);

	//Set style for Screen2_Loading_img_1. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_img_recolor(ui->Screen2_Loading_img_1, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor_opa(ui->Screen2_Loading_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Screen2_Loading_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->Screen2_Loading_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Screen2_Loading_img_1,&_1630548437136_alpha_146x49);
	lv_img_set_pivot(ui->Screen2_Loading_img_1, 50,50);
	lv_img_set_angle(ui->Screen2_Loading_img_1, 0);
}