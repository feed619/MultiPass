#include "tab.h"

Tab::Tab(QString tab_name,bool email,bool login,bool password) {

    email_= email;
    login_ = login;
    password_ = password;

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setSpacing(0);
    horizontalLayout->setObjectName("horizontalLayout");

    tab_btn = new TabPushButton(tab_name);
    tab_btn->setObjectName("label_tab_name");
    tab_btn->setMaximumSize(QSize(INTERFACE::LABEL_TAB_NAME_WIDTH, INTERFACE::LABEL_TAB_NAME_HEIGHT));
    tab_btn->setLayoutDirection(Qt::LeftToRight);
    tab_btn->setAutoFillBackground(false);
    tab_btn->setStyleSheet(QString::fromUtf8(INTERFACE::QSS_LABEL_TAB_NAME_COLOR));

    horizontalLayout->addWidget(tab_btn->label_ico);

    horizontalLayout->addWidget(tab_btn);

}


