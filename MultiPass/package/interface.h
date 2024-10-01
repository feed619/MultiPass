#ifndef INTERFACE_H
#define INTERFACE_H

#include "../tools/settings.h"
#include "tab.h"
#include "values.h"
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <list>

class Interface
{
public:
    Interface(QMainWindow *window);

    std::list<Tab*> tab_list;
    std::list<Values*> values_list;
    Tab* tab;
    Tab* tab2;
    QFont font_big;
    QFont font_middle;
    QVBoxLayout *vertical_tab;
    QVBoxLayout *vertical_values;


    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacerValues;
    QWidget *verticalLayoutWidget;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *vertical;
    QHBoxLayout *horizont_btns;
    QHBoxLayout *horizont_add_space;
    QPushButton *btn_add;
    QSpacerItem *space_add;
    QPushButton *btn_new;
    QSpacerItem *space_new_delete;
    QPushButton *btn_delete;
    QFrame *frame_names;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizont_names;
    QLabel *label_tab;
    QPushButton *btn_search;
    QLineEdit *lineEdit_search;
    QSpacerItem *space_values;
    QLabel *label_email;
    QSpacerItem *space_e_p;
    QLabel *label_password;
    QHBoxLayout *horizont_data;
    QScrollArea *scrollArea_tab;
    QWidget *scrollAreaWidgetContents_tab;
    QScrollArea *scrollArea_values;
    QWidget *scrollAreaWidgetContents_values;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_ico;
    QLabel *label_tab_name;
    QLabel * value_Class_1;
    QLabel * value_Class_2;
    QWidget *containerWidget1;
    QPushButton* btn_Class_1;
    QPushButton*  btn_Class_2;
    QHBoxLayout * value_copy_1;
    QHBoxLayout * value_copy_2;
private:
    void create_control_buttons();
    void create_frame_names();
    void create_horizont_data();
    void create_scrollArea_tab();
    void create_scrollArea_values();
    void create_tab_list();
    void create_values_list();

};

#endif // INTERFACE_H
