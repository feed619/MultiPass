#include "labelcopy.h"

LabelCopy::LabelCopy(QWidget* widget) {

    value_copy = new QHBoxLayout();
    value_copy->setSpacing(0);
    value_copy->setObjectName("value_copy_1");
    value_Class = new QLabel(widget);
    value_Class->setObjectName("value_Class_1");
    value_Class->setEnabled(true);
    value_Class->setMinimumSize(QSize(0, 30));
    value_Class->setMaximumSize(QSize(11111, 30));
    value_Class->setStyleSheet(QString::fromUtf8("background-color: rgb(12, 12, 12);\n"
                                                   "font: 25pt \"Britannic Bold\";\n"
                                                   "color: rgb(68, 73, 80);\n"
                                                   "border:none;"));
    value_Class->setAlignment(Qt::AlignCenter);

    value_copy->addWidget(value_Class);

    btn_Class = new QPushButton(widget);
    btn_Class->setObjectName("btn_Class_1");
    btn_Class->setMinimumSize(QSize(30, 30));
    btn_Class->setMaximumSize(QSize(30, 30));
    btn_Class->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 199, 199);\n"
                                                 "color: rgb(34, 40, 49);\n"
                                                 "font: 25pt \"Britannic Bold\";\n"
                                                 "border:none;"));

    value_copy->addWidget(btn_Class);

/*
    value_copy = new QHBoxLayout(widget);
    value_copy->setSpacing(0);
    value_copy->setObjectName("value_copy");
    value_copy->setContentsMargins(0, 0, 0, 0);
    value_Class = new QLabel(widget);
    value_Class->setObjectName("value_Class");
    value_Class->setEnabled(true);
    value_Class->setMinimumSize(QSize(0, 30));
    value_Class->setMaximumSize(QSize(11111, 30));
    value_Class->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
                                                 "font: 25pt \"Britannic Bold\";\n"
                                                 "color: rgb(68, 73, 80);"));
    value_Class->setAlignment(Qt::AlignCenter);

    value_copy->addWidget(value_Class);

    btn_Class = new QPushButton(widget);
    btn_Class->setObjectName("btn_Class");
    btn_Class->setMinimumSize(QSize(30, 30));
    btn_Class->setMaximumSize(QSize(30, 30));
    btn_Class->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
                                               "color: rgb(34, 40, 49);\n"
                                               "font: 25pt \"Britannic Bold\";\n"
                                               "border:none;"));

    value_copy->addWidget(btn_Class);
*/

}
