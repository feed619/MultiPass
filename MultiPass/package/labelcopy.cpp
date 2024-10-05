#include "labelcopy.h"

LabelCopy::LabelCopy(QWidget* widget) {

    value_copy = new QHBoxLayout();
    value_copy->setSpacing(0);
    value_copy->setObjectName("value_copy_1");
    value_Class = new QLabel();
    value_Class->setObjectName("value_Class_1");
    value_Class->setEnabled(true);
    value_Class->setMinimumSize(QSize(INTERFACE::LABELCOPY_VALUE_COPY_WIDTH, INTERFACE::LABELCOPY_VALUE_COPY_HEIGHT));
    value_Class->setMaximumSize(QSize(10000, 30));
    value_Class->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_LABELCOPY_LABEL_COLOR));
    value_Class->setAlignment(Qt::AlignCenter);

    value_copy->addWidget(value_Class);

    btn_Class = new QPushButton();
    btn_Class->setObjectName("btn_Class_1");
    btn_Class->setFixedSize(QSize(INTERFACE::LABELCOPY_BTN_CLASS_WIDTH, INTERFACE::LABELCOPY_BTN_CLASS_WIDTH));
    btn_Class->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_LABELCOPY_BNT_COLOR));

    value_copy->addWidget(btn_Class);


}
