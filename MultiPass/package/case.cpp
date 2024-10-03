#include "case.h"

Case::Case(QWidget* widget,QString name) {


    horizontalLayout_values = new QHBoxLayout();
    horizontalLayout_values->setObjectName("horizontalLayout_values");
    //space_values = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

    //horizontalLayout_values->addItem(space_values);

    label_name = new QLabel(widget);
    label_name->setObjectName("label_email");
    label_name->setFixedSize(QSize(INTERFACE::LINE_TAB_NAME_WIDTH, INTERFACE::LINE_TAB_NAME_HEIGHT));
    //label_email->setFont(font_middle);
    label_name->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_LABEL_TAB_NAMES_COLOR));

    btn_view = new QPushButton(widget);
    btn_view->setObjectName("btn_name");
    btn_view->setFixedSize(20,20);
    btn_view->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_LABEL_TAB_NAMES_COLOR));


    horizontalLayout_values->addWidget(label_name);
    horizontalLayout_values->addWidget(btn_view);

    label_name->setText(name);
    btn_view->setText("O");


}
