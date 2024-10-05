#include "case.h"

Case::Case(QWidget* widget,QString name) {


    container_widget = new  QWidget();
    container_widget->setObjectName("widget_con");

    horizontalLayout_values = new QHBoxLayout();
    horizontalLayout_values->setObjectName("horizontalLayout_values");

    //container_widget->setLayout(horizontalLayout_values);


    label_name = new QLabel(name);
    label_name->setObjectName("label_name");
    label_name->setFixedSize(QSize(INTERFACE::LINE_TAB_NAME_WIDTH, INTERFACE::LINE_TAB_NAME_HEIGHT));
    // label_name->setMinimumSize(QSize(INTERFACE::LINE_TAB_NAME_WIDTH, INTERFACE::LINE_TAB_NAME_HEIGHT));
    // label_name->setMaximumSize(QSize(10000, 30));

    //label_email->setFont(font_middle);
    label_name->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_LABEL_TAB_NAMES_COLOR));

    btn_view = new QPushButton("0");
    btn_view->setObjectName("btn_view");
    btn_view->setFixedSize(20,20);
    btn_view->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_LABEL_TAB_NAMES_COLOR));


    horizontalLayout_values->addWidget(label_name);
    horizontalLayout_values->addWidget(btn_view);

    space_n_b = new QSpacerItem(120, 27, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);
    horizontalLayout_values->addItem(space_n_b);

    //label_name->setText(name);
    //btn_view->setText("O");


}
