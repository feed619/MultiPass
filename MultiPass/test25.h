/********************************************************************************
** Form generated from reading UI file 'multipass.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TEST25_H
#define TEST25_H

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

QT_BEGIN_NAMESPACE

class Ui_MultiPass
{
public:
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
    QWidget *widget;
    QHBoxLayout *horizontalLayout_main;
    QHBoxLayout *horizontalLayout_tab;
    QLabel *label_tab;
    QLineEdit *lineEdit_search;
    QPushButton *btn_search;
    QHBoxLayout *horizontalLayout_values;
    QSpacerItem *space_values_3;
    QLabel *label_email;
    QSpacerItem *space_e_p;
    QLabel *label_password;
    QSpacerItem *space_e_p_2;
    QHBoxLayout *horizont_data;
    QScrollArea *scrollArea_tab;
    QWidget *scrollAreaWidgetContents_tab;
    QScrollArea *scrollArea_values;
    QWidget *scrollAreaWidgetContents_values;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *value_copy_1;
    QLabel *value_Class_1;
    QPushButton *btn_Class_1;
    QHBoxLayout *value_copy_2;
    QLabel *value_Class_2;
    QPushButton *btn_Class_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_ico_3;
    QLabel *label_tab_name_3;
    QWidget *layoutWidget2;
    QHBoxLayout *value_copy;
    QLabel *value_Class;
    QPushButton *btn_Class;

    void setupUi(QMainWindow *MultiPass)
    {
        if (MultiPass->objectName().isEmpty())
            MultiPass->setObjectName("MultiPass");
        MultiPass->resize(1180, 996);
        MultiPass->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 40, 49);"));
        centralwidget = new QWidget(MultiPass);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 904, 621));
        vertical = new QVBoxLayout(layoutWidget);
        vertical->setSpacing(0);
        vertical->setObjectName("vertical");
        vertical->setContentsMargins(0, 0, 0, 0);
        horizont_btns = new QHBoxLayout();
        horizont_btns->setSpacing(0);
        horizont_btns->setObjectName("horizont_btns");
        horizont_btns->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizont_add_space = new QHBoxLayout();
        horizont_add_space->setObjectName("horizont_add_space");
        btn_add = new QPushButton(layoutWidget);
        btn_add->setObjectName("btn_add");
        btn_add->setMinimumSize(QSize(130, 40));
        btn_add->setMaximumSize(QSize(130, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Britannic Bold")});
        font.setPointSize(30);
        btn_add->setFont(font);
        btn_add->setAcceptDrops(false);
        btn_add->setLayoutDirection(Qt::LeftToRight);
        btn_add->setStyleSheet(QString::fromUtf8("color: rgb(68, 73, 80);\n"
"background-color: rgb(238, 238, 238);"));

        horizont_add_space->addWidget(btn_add);

        space_add = new QSpacerItem(118, 60, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizont_add_space->addItem(space_add);


        horizont_btns->addLayout(horizont_add_space);

        btn_new = new QPushButton(layoutWidget);
        btn_new->setObjectName("btn_new");
        btn_new->setMinimumSize(QSize(200, 30));
        btn_new->setMaximumSize(QSize(200, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Britannic Bold")});
        font1.setPointSize(20);
        btn_new->setFont(font1);
        btn_new->setStyleSheet(QString::fromUtf8("color: rgb(68, 73, 80);\n"
"background-color: rgb(238, 238, 238);"));

        horizont_btns->addWidget(btn_new);

        space_new_delete = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizont_btns->addItem(space_new_delete);

        btn_delete = new QPushButton(layoutWidget);
        btn_delete->setObjectName("btn_delete");
        btn_delete->setMinimumSize(QSize(200, 30));
        btn_delete->setMaximumSize(QSize(200, 30));
        btn_delete->setFont(font1);
        btn_delete->setStyleSheet(QString::fromUtf8("color: rgb(68, 73, 80);\n"
"background-color: rgb(238, 238, 238);"));

        horizont_btns->addWidget(btn_delete);


        vertical->addLayout(horizont_btns);

        frame_names = new QFrame(layoutWidget);
        frame_names->setObjectName("frame_names");
        frame_names->setMinimumSize(QSize(0, 30));
        frame_names->setMaximumSize(QSize(16777215, 30));
        frame_names->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 62, 70);"));
        frame_names->setFrameShape(QFrame::StyledPanel);
        frame_names->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame_names);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 901, 34));
        horizontalLayout_main = new QHBoxLayout(widget);
        horizontalLayout_main->setObjectName("horizontalLayout_main");
        horizontalLayout_main->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_tab = new QHBoxLayout();
        horizontalLayout_tab->setObjectName("horizontalLayout_tab");
        horizontalLayout_tab->setSizeConstraint(QLayout::SetMaximumSize);
        label_tab = new QLabel(widget);
        label_tab->setObjectName("label_tab");
        label_tab->setMinimumSize(QSize(123, 20));
        label_tab->setMaximumSize(QSize(90, 20));
        label_tab->setFont(font1);
        label_tab->setStyleSheet(QString::fromUtf8("color: rgb(189, 190, 192);"));

        horizontalLayout_tab->addWidget(label_tab);

        lineEdit_search = new QLineEdit(widget);
        lineEdit_search->setObjectName("lineEdit_search");
        lineEdit_search->setMinimumSize(QSize(100, 20));
        lineEdit_search->setMaximumSize(QSize(90, 20));
        lineEdit_search->setStyleSheet(QString::fromUtf8("color: rgb(189, 190, 192);\n"
"background-color: rgb(238, 238, 238);"));

        horizontalLayout_tab->addWidget(lineEdit_search);

        btn_search = new QPushButton(widget);
        btn_search->setObjectName("btn_search");
        btn_search->setMinimumSize(QSize(20, 20));
        btn_search->setMaximumSize(QSize(20, 20));

        horizontalLayout_tab->addWidget(btn_search);


        horizontalLayout_main->addLayout(horizontalLayout_tab);

        horizontalLayout_values = new QHBoxLayout();
        horizontalLayout_values->setObjectName("horizontalLayout_values");
        space_values_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_values->addItem(space_values_3);

        label_email = new QLabel(widget);
        label_email->setObjectName("label_email");
        label_email->setMinimumSize(QSize(60, 20));
        label_email->setFont(font1);
        label_email->setStyleSheet(QString::fromUtf8("color: rgb(189, 190, 192);"));

        horizontalLayout_values->addWidget(label_email);

        space_e_p = new QSpacerItem(88, 27, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_values->addItem(space_e_p);

        label_password = new QLabel(widget);
        label_password->setObjectName("label_password");
        label_password->setMinimumSize(QSize(60, 20));
        label_password->setFont(font1);
        label_password->setStyleSheet(QString::fromUtf8("color: rgb(189, 190, 192);"));

        horizontalLayout_values->addWidget(label_password);

        space_e_p_2 = new QSpacerItem(88, 27, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_values->addItem(space_e_p_2);


        horizontalLayout_main->addLayout(horizontalLayout_values);

        horizontalLayout_main->setStretch(1, 1);

        vertical->addWidget(frame_names);

        horizont_data = new QHBoxLayout();
        horizont_data->setSpacing(0);
        horizont_data->setObjectName("horizont_data");
        scrollArea_tab = new QScrollArea(layoutWidget);
        scrollArea_tab->setObjectName("scrollArea_tab");
        scrollArea_tab->setMinimumSize(QSize(250, 510));
        scrollArea_tab->setMaximumSize(QSize(260, 520));
        scrollArea_tab->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 62, 70);\n"
"border: 1px solid rgb(57,62,70);"));
        scrollArea_tab->setWidgetResizable(true);
        scrollAreaWidgetContents_tab = new QWidget();
        scrollAreaWidgetContents_tab->setObjectName("scrollAreaWidgetContents_tab");
        scrollAreaWidgetContents_tab->setGeometry(QRect(0, 0, 248, 518));
        scrollArea_tab->setWidget(scrollAreaWidgetContents_tab);

        horizont_data->addWidget(scrollArea_tab);

        scrollArea_values = new QScrollArea(layoutWidget);
        scrollArea_values->setObjectName("scrollArea_values");
        scrollArea_values->setMinimumSize(QSize(650, 510));
        scrollArea_values->setMaximumSize(QSize(650, 520));
        scrollArea_values->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        scrollArea_values->setWidgetResizable(true);
        scrollAreaWidgetContents_values = new QWidget();
        scrollAreaWidgetContents_values->setObjectName("scrollAreaWidgetContents_values");
        scrollAreaWidgetContents_values->setGeometry(QRect(0, 0, 648, 518));
        layoutWidget1 = new QWidget(scrollAreaWidgetContents_values);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 0, 651, 34));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        value_copy_1 = new QHBoxLayout();
        value_copy_1->setSpacing(0);
        value_copy_1->setObjectName("value_copy_1");
        value_Class_1 = new QLabel(layoutWidget1);
        value_Class_1->setObjectName("value_Class_1");
        value_Class_1->setEnabled(true);
        value_Class_1->setMinimumSize(QSize(0, 30));
        value_Class_1->setMaximumSize(QSize(11111, 30));
        value_Class_1->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
"font: 25pt \"Britannic Bold\";\n"
"color: rgb(68, 73, 80);\n"
"border:none;"));
        value_Class_1->setAlignment(Qt::AlignCenter);

        value_copy_1->addWidget(value_Class_1);

        btn_Class_1 = new QPushButton(layoutWidget1);
        btn_Class_1->setObjectName("btn_Class_1");
        btn_Class_1->setMinimumSize(QSize(30, 30));
        btn_Class_1->setMaximumSize(QSize(30, 30));
        btn_Class_1->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
"color: rgb(34, 40, 49);\n"
"font: 25pt \"Britannic Bold\";\n"
"border:none;"));

        value_copy_1->addWidget(btn_Class_1);


        horizontalLayout->addLayout(value_copy_1);

        value_copy_2 = new QHBoxLayout();
        value_copy_2->setSpacing(0);
        value_copy_2->setObjectName("value_copy_2");
        value_Class_2 = new QLabel(layoutWidget1);
        value_Class_2->setObjectName("value_Class_2");
        value_Class_2->setEnabled(true);
        value_Class_2->setMinimumSize(QSize(0, 30));
        value_Class_2->setMaximumSize(QSize(11111, 30));
        value_Class_2->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
"font: 25pt \"Britannic Bold\";\n"
"color: rgb(68, 73, 80);\n"
"border:none;"));
        value_Class_2->setAlignment(Qt::AlignCenter);

        value_copy_2->addWidget(value_Class_2);

        btn_Class_2 = new QPushButton(layoutWidget1);
        btn_Class_2->setObjectName("btn_Class_2");
        btn_Class_2->setMinimumSize(QSize(30, 30));
        btn_Class_2->setMaximumSize(QSize(30, 30));
        btn_Class_2->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
"color: rgb(34, 40, 49);\n"
"font: 25pt \"Britannic Bold\";\n"
"border:none;"));

        value_copy_2->addWidget(btn_Class_2);


        horizontalLayout->addLayout(value_copy_2);

        scrollArea_values->setWidget(scrollAreaWidgetContents_values);

        horizont_data->addWidget(scrollArea_values);


        vertical->addLayout(horizont_data);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(920, 340, 281, 141));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 279, 139));
        layoutWidget_3 = new QWidget(scrollAreaWidgetContents);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 20, 249, 42));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_ico_3 = new QLabel(layoutWidget_3);
        label_ico_3->setObjectName("label_ico_3");
        label_ico_3->setEnabled(true);
        label_ico_3->setMinimumSize(QSize(40, 40));
        label_ico_3->setMaximumSize(QSize(40, 40));
        label_ico_3->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
"font: 25pt \"Britannic Bold\";"));

        horizontalLayout_3->addWidget(label_ico_3);

        label_tab_name_3 = new QLabel(layoutWidget_3);
        label_tab_name_3->setObjectName("label_tab_name_3");
        label_tab_name_3->setMinimumSize(QSize(0, 40));
        label_tab_name_3->setMaximumSize(QSize(16777215, 40));
        label_tab_name_3->setLayoutDirection(Qt::LeftToRight);
        label_tab_name_3->setAutoFillBackground(false);
        label_tab_name_3->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
"color: rgb(34, 40, 49);\n"
"font: 25pt \"Britannic Bold\";"));
        label_tab_name_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_tab_name_3);

        scrollArea->setWidget(scrollAreaWidgetContents);
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(80, 640, 411, 32));
        value_copy = new QHBoxLayout(layoutWidget2);
        value_copy->setSpacing(0);
        value_copy->setObjectName("value_copy");
        value_copy->setContentsMargins(0, 0, 0, 0);
        value_Class = new QLabel(layoutWidget2);
        value_Class->setObjectName("value_Class");
        value_Class->setEnabled(true);
        value_Class->setMinimumSize(QSize(0, 30));
        value_Class->setMaximumSize(QSize(11111, 30));
        value_Class->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
"font: 25pt \"Britannic Bold\";\n"
"color: rgb(68, 73, 80);"));
        value_Class->setAlignment(Qt::AlignCenter);

        value_copy->addWidget(value_Class);

        btn_Class = new QPushButton(layoutWidget2);
        btn_Class->setObjectName("btn_Class");
        btn_Class->setMinimumSize(QSize(30, 30));
        btn_Class->setMaximumSize(QSize(30, 30));
        btn_Class->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
"color: rgb(34, 40, 49);\n"
"font: 25pt \"Britannic Bold\";\n"
"border:none;"));

        value_copy->addWidget(btn_Class);

        MultiPass->setCentralWidget(centralwidget);

        retranslateUi(MultiPass);

        QMetaObject::connectSlotsByName(MultiPass);
    } // setupUi

    void retranslateUi(QMainWindow *MultiPass)
    {
        MultiPass->setWindowTitle(QCoreApplication::translate("MultiPass", "MultiPass", nullptr));
        btn_add->setText(QCoreApplication::translate("MultiPass", "add", nullptr));
        btn_new->setText(QCoreApplication::translate("MultiPass", "new account", nullptr));
        btn_delete->setText(QCoreApplication::translate("MultiPass", "delete account", nullptr));
        label_tab->setText(QCoreApplication::translate("MultiPass", "  site", nullptr));
        btn_search->setText(QCoreApplication::translate("MultiPass", "s", nullptr));
        label_email->setText(QCoreApplication::translate("MultiPass", "email", nullptr));
        label_password->setText(QCoreApplication::translate("MultiPass", "password", nullptr));
        value_Class_1->setText(QCoreApplication::translate("MultiPass", "asdasdasd", nullptr));
        btn_Class_1->setText(QCoreApplication::translate("MultiPass", "k", nullptr));
        value_Class_2->setText(QCoreApplication::translate("MultiPass", "asdasdasd", nullptr));
        btn_Class_2->setText(QCoreApplication::translate("MultiPass", "k", nullptr));
        label_ico_3->setText(QString());
#if QT_CONFIG(tooltip)
        label_tab_name_3->setToolTip(QCoreApplication::translate("MultiPass", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_tab_name_3->setText(QCoreApplication::translate("MultiPass", "Youtube", nullptr));
        value_Class->setText(QCoreApplication::translate("MultiPass", "asdasdasd", nullptr));
        btn_Class->setText(QCoreApplication::translate("MultiPass", "k", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MultiPass: public Ui_MultiPass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TEST25_H
