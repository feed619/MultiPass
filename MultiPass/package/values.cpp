#include "values.h"

Values::Values(QWidget* verticalLayoutWidget) {

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setSpacing(0);
    horizontalLayout->setObjectName("horizontalLayout");
    horizontalLayout->setContentsMargins(0, 0, 0, 0);

    values_list.push_back(new LabelCopy(verticalLayoutWidget));
    horizontalLayout->addLayout(values_list.back()->value_copy);

    values_list.push_back(new LabelCopy(verticalLayoutWidget));
    horizontalLayout->addLayout(values_list.back()->value_copy);


    /*
    horizontalLayout = new QHBoxLayout(widget);
    horizontalLayout->setSpacing(0);
    horizontalLayout->setObjectName("horizontalLayout");
    horizontalLayout->setContentsMargins(0, 0, 0, 0);



    values_list.push_back(new LabelCopy(widget));
    horizontalLayout->addLayout(values_list.back()->value_copy);
    values_list.push_back(new LabelCopy(widget));
    horizontalLayout->addLayout(values_list.back()->value_copy);

    frame_values = new QFrame(MainWidget);
    frame_values->setObjectName("frame_values");
    frame_values->setGeometry(QRect(0, 0, 821, 31));
    frame_values->setFrameShape(QFrame::StyledPanel);
    frame_values->setFrameShadow(QFrame::Raised);
    widget = new QWidget(frame_values);
    widget->setObjectName("widget");
    widget->setGeometry(QRect(0, 0, 821, 32));

    horizontalLayout = new QHBoxLayout(widget);
    horizontalLayout->setSpacing(0);
    horizontalLayout->setObjectName("horizontalLayout");
    horizontalLayout->setContentsMargins(0, 0, 0, 0);

    //values_list.push_back(new LabelCopy(widget));
    //horizontalLayout->addLayout(values_list.back()->value_copy);
    //values_list.push_back(new LabelCopy(widget));
    //horizontalLayout->addLayout(values_list.back()->value_copy);

    value_copy = new QHBoxLayout(widget);
    value_copy->setSpacing(0);
    value_copy->setObjectName("value_copy");
    value_copy->setContentsMargins(0, 0, 0, 0);
    value_Class = new QLabel(widget);
    value_Class->setObjectName("value_Class");
    value_Class->setEnabled(true);
    value_Class->setMinimumSize(QSize(0, 30));
    value_Class->setMaximumSize(QSize(11111, 30));
    value_Class->setStyleSheet(QString::fromUtf8("background-color: rgb(12, 12, 12);\n"
                                                 "font: 25pt \"Britannic Bold\";\n"
                                                 "color: rgb(68, 73, 80);"));
    value_Class->setAlignment(Qt::AlignCenter);

    value_copy->addWidget(value_Class);

    btn_Class = new QPushButton(widget);
    btn_Class->setObjectName("btn_Class");
    btn_Class->setMinimumSize(QSize(30, 30));
    btn_Class->setMaximumSize(QSize(30, 30));
    btn_Class->setStyleSheet(QString::fromUtf8("background-color: rgb(12, 12, 12);\n"
                                               "color: rgb(34, 40, 49);\n"
                                               "font: 25pt \"Britannic Bold\";\n"
                                               "border:none;"));

    value_copy->addWidget(btn_Class);
*/
   /*
    horizontalLayout_values = new QHBoxLayout(widget);
    horizontalLayout_values->setSpacing(0);
    horizontalLayout_values->setObjectName("horizontalLayout_values");
    horizontalLayout_values->setContentsMargins(0, 0, 0, 0);
    value_label_email = new QLabel(widget);
    value_label_email->setObjectName("value_label_email");
    value_label_email->setEnabled(true);
    value_label_email->setMinimumSize(QSize(0, 30));
    value_label_email->setMaximumSize(QSize(11111, 30));
    value_label_email->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
                                                       "font: 25pt \"Britannic Bold\";\n"
                                                       "color: rgb(68, 73, 80);"));
    value_label_email->setAlignment(Qt::AlignCenter);

    horizontalLayout_values->addWidget(value_label_email);

    email_copy = new QPushButton(widget);
    email_copy->setObjectName("email_copy");
    email_copy->setMinimumSize(QSize(30, 30));
    email_copy->setMaximumSize(QSize(30, 30));
    email_copy->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
                                                "border:none;\n"
                                                "color: rgb(34, 40, 49);\n"
                                                "font: 25pt \"Britannic Bold\";"));

    horizontalLayout_values->addWidget(email_copy);

    value_label_password = new QLabel(widget);
    value_label_password->setObjectName("value_label_password");
    value_label_password->setMinimumSize(QSize(0, 30));
    value_label_password->setMaximumSize(QSize(16777215, 30));
    value_label_password->setLayoutDirection(Qt::LeftToRight);
    value_label_password->setAutoFillBackground(false);
    value_label_password->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
                                                          "color: rgb(68, 73, 80);\n"
                                                          "font: 25pt \"Britannic Bold\";"));
    value_label_password->setAlignment(Qt::AlignCenter);

    horizontalLayout_values->addWidget(value_label_password);

    password_copy = new QPushButton(widget);
    password_copy->setObjectName("password_copy");
    password_copy->setMinimumSize(QSize(30, 30));
    password_copy->setMaximumSize(QSize(30, 30));
    password_copy->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
                                                   "border:none;\n"
                                                   "color: rgb(34, 40, 49);\n"
                                                   "font: 25pt \"Britannic Bold\";"));

    horizontalLayout_values->addWidget(password_copy);
*/
}
