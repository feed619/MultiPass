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

const int LABEL_SITE_WIDTH = 126;
const int LABEL_SITE_HEIGHT = 20;

const int LINE_EDIT_WIDTH = 90;
const int LINE_EDIT_HEIGHT = 20;

const int LINE_TAB_NAME_WIDTH = 120;
const int LINE_TAB_NAME_HEIGHT = 20;

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

const int LABELCOPY_VALUE_COPY_WIDTH = 150;
const int LABELCOPY_VALUE_COPY_HEIGHT = 30;

const int LABELCOPY_BTN_CLASS_WIDTH = 30;
const int LABELCOPY_BTN_CLASS_HEIGHT = 30;



// window name
const char* const WINDOW_NAME = "MultiPass";

// colors of app
const char* const CSS_BACKGROUND_COLOR = "background-color: rgb(34, 40, 49);";
const char* const CSS_BACKGROUND_FRAME_COLOR = "background-color: rgb(57, 62, 70);";
const char* const CSS_BUTTON_COLOR = "color: rgb(68, 73, 80);\n"
                                     "background-color: rgb(238, 238, 238);";
const char* const CSS_TAB_LABEL_COLOR =  "color: rgb(189, 190, 192);";
const char* const CSS_LABEL_EDIT_COLOR ="color: rgb(68, 73, 80);\n"
                                        "font: 12pt \"Britannic Bold\";\n"
                                        "background-color: rgb(238, 238, 238);";
const char* const CSS_BUTTON_SEARCH_COLOR = "color: rgb(68, 73, 80);\n"
                                            "background-color: rgb(238, 238, 238);"
                                            "font: 15pt \"Britannic Bold\";";

const char* const CSS_LABEL_TAB_NAMES_COLOR =  "color: rgb(189, 190, 192);\n"
                                              "font: 15pt \"Britannic Bold\";";

const char* const CSS_SCROLL_AREA_TAB_COLOR = "background-color: rgb(57, 62, 70);\n"
                                          "border: 1px solid rgb(57,62,70);";
const char* const CSS_SCROLL_AREA_VALUES_COLOR = "background-color: rgb(238, 238, 238);\n"
                                                  "border: 1px;"   ;
const char* const CSS_LABEL_TAB_NAME_COLOR = "background-color: rgb(238, 238, 238);\n"
                                             "color: rgb(34, 40, 49);\n"
                                             "font: 25pt \"Britannic Bold\";";

const char* const QSS_LABEL_TAB_NAME_COLOR =         "QPushButton {"
                                             "   background-color: rgb(238, 238, 238);"
                                             "   color: rgb(34, 40, 49);"
                                             "   border: 1px ;"
                                             "   font: 25pt 'Britannic Bold';"
                                             "}"
                                             "QPushButton:hover {"
                                             "   background-color: rgb(198, 198, 198);"
                                             "}"
                                             "QPushButton:pressed {"
                                             "   background-color: rgb(150, 150, 150);"
                                             "}";

const char* const CSS_LABELCOPY_LABEL_COLOR ="background-color:rgb(198, 199, 199);\n"
                                              "font: 25pt \"Britannic Bold\";\n"
                                              "color: rgb(68, 73, 80);\n"
                                              "border:none;"
    ;

const char* const CSS_LABELCOPY_BNT_COLOR ="background-color: rgb(112, 112, 112);\n"
                                            "color: rgb(34, 40, 49);\n"
                                            "font: 25pt \"Britannic Bold\";\n"
                                            "border:none;";
//(57, 62, 70)
//(198, 199, 199)

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

