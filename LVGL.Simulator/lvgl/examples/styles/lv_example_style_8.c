#include "../lv_examples.h"
#if LV_BUILD_EXAMPLES && LV_USE_LABEL

/**
 * Using the text style properties
 */
void lv_example_style_8(void)
{
    static lv_style_t style;
    lv_style_init(&style);

    lv_style_set_radius(&style, 5);
    lv_style_set_bg_opa(&style, LV_OPA_COVER);//透明  背景深度
    lv_style_set_bg_color(&style, lv_palette_lighten(LV_PALETTE_GREY, 2));//调色板
    lv_style_set_border_width(&style, 2);//边界
    lv_style_set_border_color(&style, lv_palette_main(LV_PALETTE_BLUE));//边界颜色
    lv_style_set_pad_all(&style, 10);//上下左右间距

    lv_style_set_text_color(&style, lv_palette_main(LV_PALETTE_BLUE));
    lv_style_set_text_letter_space(&style, 5);//文字空间  字母间距
    lv_style_set_text_line_space(&style, 20);//行间距
    lv_style_set_text_decor(&style, LV_TEXT_DECOR_STRIKETHROUGH);//下划线和删除线

    /*Create an object with the new style*///解读要实现的时候就要这样处理
    lv_obj_t * obj = lv_label_create(lv_scr_act());
    lv_obj_add_style(obj, &style, 0);
    lv_label_set_text(obj, "Text of\n"
                            "a label");
    //居中窗口  如果不处理就会偏向
    //lv_obj_center(obj);
}

#endif
