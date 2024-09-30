#ifndef INTERFACE_H
#define INTERFACE_H

#include "../tools/settings.h"
#include "tab.h"
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
    Tab* tab;
    Tab* tab2;
    QVBoxLayout *vertical_tab;
    QSpacerItem *verticalSpacer;
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

    QWidget *containerWidget1;

    void create_tab_list();

};

#endif // INTERFACE_H
