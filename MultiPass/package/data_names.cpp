#include "data_names.h"

Data_names::Data_names(QWidget* widget) {


    horizontalLayout_values = new QHBoxLayout();
    horizontalLayout_values->setObjectName("horizontalLayout_values");
    space_values = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

    horizontalLayout_values->addItem(space_values);

    label_email = new QLabel(widget);
    label_email->setObjectName("label_email");
    label_email->setFixedSize(QSize(INTERFACE::LINE_TAB_NAME_WIDTH, INTERFACE::LINE_TAB_NAME_HEIGHT));
    //label_email->setFont(font_middle);
    label_email->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_LABEL_TAB_NAMES_COLOR));

    horizontalLayout_values->addWidget(label_email);

    space_e_p = new QSpacerItem(88, 27, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

    horizontalLayout_values->addItem(space_e_p);

    label_password = new QLabel(widget);
    label_password->setObjectName("label_password");
    label_password->setFixedSize(QSize(INTERFACE::LINE_TAB_NAME_WIDTH, INTERFACE::LINE_TAB_NAME_HEIGHT));
    //label_password->setFont(font_middle);
    label_password->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_LABEL_TAB_NAMES_COLOR));

    horizontalLayout_values->addWidget(label_password);

    label_email->setText(QCoreApplication::translate("MultiPass", "email", nullptr));
    label_password->setText(QCoreApplication::translate("MultiPass", "password", nullptr));

}
