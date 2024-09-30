#ifndef SETTINGS_H
#define SETTINGS_H



namespace INTERFACE
{
// interface sizes
const int WINDOW_WIDTH = 900;
const int WINDOW_HEIGHT = 600;

const int BUTTON_WIDTH = 200;
const int BUTTON_HEIGHT = 30;
const int BUTTON_ADD_WIDTH = 130;
const int BUTTON_ADD_HEIGHT = 40;

const int BUTTON_SEARCH_WIDTH = 20;
const int BUTTON_SEARCH_HEIGHT = 20;

const int FRAME_WIDTH = 900;
const int FRAME_HEIGHT = 30;

const int LABEL_SITE_WIDTH = 97;
const int LABEL_SITE_HEIGHT = 20;

const int LINE_EDIT_WIDTH = 90;
const int LINE_EDIT_HEIGHT = 20;

const int LINE_EMAIL_WIDTH = 80;
const int LINE_EMAIL_HEIGHT = 20;

const int LINE_PASSWORD_WIDTH = 120;
const int LINE_PASSWORD_HEIGHT = 30;

const int SCROLL_AREA_TAB_WIDTH = 250;
const int SCROLL_AREA_TAB_HEIGHT = 510;

const int SCROLL_AREA_VALUES_WIDTH = 650;
const int SCROLL_AREA_VALUES_HEIGHT = 510;


const int LABEL_ICO_WIDTH = 40;
const int LABEL_ICO_HEIGHT = 40;

const int LABEL_TAB_NAME_WIDTH = 210;
const int LABEL_TAB_NAME_HEIGHT = 40;

// window name
const char* const WINDOW_NAME = "MultiPass";

// colors of app
const char* const CSS_BACKGROUND_COLOR = "background-color: rgb(34, 40, 49);";
const char* const CSS_BACKGROUND_FRAME_COLOR = "background-color: rgb(57, 62, 70);";
const char* const CSS_BUTTON_COLOR = "color: rgb(68, 73, 80);\n"
                                     "background-color: rgb(238, 238, 238);";
const char* const CSS_TAB_LABEL_COLOR =  "color: rgb(189, 190, 192);";
const char* const CSS_LABEL_EDIT_COLOR =  "color: rgb(189, 190, 192);\n"
                                                     "background-color: rgb(238, 238, 238);";
const char* const CSS_BUTTON_SEARCH_COLOR = "color: rgb(68, 73, 80);\n"
                                            "background-color: rgb(238, 238, 238);"
                                            "font: 15pt \"Britannic Bold\";";
const char* const CSS_SCROLL_AREA_TAB_COLOR = "background-color: rgb(57, 62, 70);\n"
                                          "border: 1px solid rgb(57,62,70);";
const char* const CSS_SCROLL_AREA_VALUES_COLOR = "background-color: rgb(238, 238, 238);";
const char* const CSS_LABEL_TAB_NAME_COLOR = "background-color: rgb(238, 238, 238);\n"
                                             "color: rgb(34, 40, 49);\n"
                                             "font: 25pt \"Britannic Bold\";";

// fronts
const char* const FONT_NAME = "Britannic Bold";
const int FONT_BIG_SIZE = 30;
const int FONT_MIDDLE_SIZE = 20;


//
//
//
//
//








const bool ENABLE = true;



};
#endif // SETTINGS_H

