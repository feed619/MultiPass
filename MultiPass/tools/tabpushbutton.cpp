#include "tabpushbutton.h"

TabPushButton::TabPushButton(const QString &text, QWidget *parent ):QPushButton(text,parent){

    label_ico = new QLabel();
    label_ico->setObjectName("label_ico");
    label_ico->setFixedSize(QSize(INTERFACE::LABEL_ICO_WIDTH, INTERFACE::LABEL_ICO_HEIGHT));
    label_ico->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_SCROLL_AREA_VALUES_COLOR));
    label_ico->setText(QString());
};
