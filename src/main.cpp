#include <Arduino.h>
#include <lvgl.h>
#include <iostream>
#include "TFT_eSPI.h"
#include "gui_guider.h"

lv_ui guider_ui;
using namespace std;
string location, temperature, weather;

static const uint16_t screenWidth = 240;
static const uint16_t screenHeight = 240;

static lv_disp_draw_buf_t draw_buf;                  // 初始化显示缓冲区
static lv_color_t buf_1[screenWidth * screenHeight]; // 用于LVGL使用的缓冲区

lv_obj_t *screenMain; // 指向所用屏幕的实例化对象
lv_obj_t *labelName;
lv_obj_t *labelTime;
lv_obj_t *labelLocation;
lv_obj_t *labelWeather;
lv_obj_t *labelTemperature;

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */

void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);

    tft.startWrite();
    tft.setAddrWindow(area->x1, area->y1, w, h);
    tft.pushColors(&color_p->full, w * h, true);
    tft.endWrite();

    lv_disp_flush_ready(disp);
}

void setup()
{
    pinMode(BLK, OUTPUT);
    digitalWrite(BLK, LOW);

    /* TFT init */
    tft.init(ST7789_DRIVER);
    tft.setRotation(0);

    /*初始化显示*/
    lv_init();                                                                 // 初始化lvgl库
    lv_disp_draw_buf_init(&draw_buf, buf_1, NULL, screenWidth * screenHeight); // 开启双缓冲

    /*Initialize the display*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);

    /*Change the following line to your display resolution*/

    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush; /*Set your driver function*/
    disp_drv.draw_buf = &draw_buf;     /*Assign the buffer to the display*/

    setup_ui(&guider_ui);

    // lv_disp_drv_register(&disp_drv);   // 注册显示屏

    // screenMain = lv_obj_create(NULL); // 创建一个实际的屏幕对象
    // labelName = lv_label_create(screenMain);
    // // labelFans = lv_label_create(screenMain);87
    // labelTime = lv_label_create(screenMain);
    // labelLocation = lv_label_create(screenMain);
    // labelWeather = lv_label_create(screenMain);
    // labelTemperature = lv_label_create(screenMain);
    // // imgHeadPhoto = lv_img_create(screenMain);

    digitalWrite(BLK, HIGH);

    // lv_label_set_long_mode(labelName, LV_LABEL_LONG_WRAP);
    // lv_label_set_text(labelName, "Hello! Yogurt");
    // lv_obj_set_size(labelName, 120, 30);
    // lv_obj_align(labelName, LV_ALIGN_DEFAULT, 120, 120);
    // lv_obj_set_style_text_font(labelName, &lv_font_montserrat_14, 0);

    // lv_label_set_long_mode(labelLocation, LV_LABEL_LONG_WRAP);
    // lv_label_set_text_fmt(labelLocation, "城市: %s", location);
    // lv_obj_set_size(labelLocation, 120, 20);
    // lv_obj_align(labelLocation, LV_ALIGN_DEFAULT, 0, 40);
    // lv_obj_set_style_text_font(labelLocation, &lv_font_montserrat_14, 0);

    // lv_label_set_long_mode(labelWeather, LV_LABEL_LONG_WRAP);
    // lv_label_set_text_fmt(labelWeather, "天气: %s", weather);
    // lv_obj_set_size(labelWeather, 120, 20);
    // lv_obj_align(labelWeather, LV_ALIGN_DEFAULT, 0, 60);
    // lv_obj_set_style_text_font(labelWeather, &lv_font_montserrat_14, 0);

    // lv_label_set_long_mode(labelTemperature, LV_LABEL_LONG_WRAP);
    // lv_label_set_text_fmt(labelTemperature, "气温: %s度", temperature);
    // lv_obj_set_size(labelTemperature, 120, 20);
    // lv_obj_align(labelTemperature, LV_ALIGN_DEFAULT, 0, 80);
    // lv_obj_set_style_text_font(labelTemperature, &lv_font_montserrat_14, 0);

    // lv_img_set_src(imgHeadPhoto, &head_photo);
    // lv_obj_align(imgHeadPhoto, LV_ALIGN_CENTER, 64, 64);
    // lv_obj_set_size(imgHeadPhoto, 60, 60);
}
void loop()
{
    // lv_scr_load(&guider.screen);

    lv_task_handler();
    vTaskDelay(1);
}