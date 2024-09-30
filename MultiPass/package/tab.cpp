#include "tab.h"

Tab::Tab(QWidget* verticalLayoutWidget,QString tab_name) {


/*
    widget = new QWidget(centralwidget);
    widget->setObjectName("widget");
    widget->setGeometry(QRect(50, 630, 259, 41));
*/
    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setSpacing(0);
    horizontalLayout->setObjectName("horizontalLayout");
    //horizontalLayout->setContentsMargins(0, 0, 0, 0);
    label_ico = new QLabel(verticalLayoutWidget);
    label_ico->setObjectName("label_ico");
    label_ico->setFixedSize(QSize(INTERFACE::LABEL_ICO_WIDTH, INTERFACE::LABEL_ICO_HEIGHT));
    label_ico->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_SCROLL_AREA_VALUES_COLOR));

    horizontalLayout->addWidget(label_ico);

    label_tab_name = new QLabel(verticalLayoutWidget);
    label_tab_name->setObjectName("label_tab_name");
    label_tab_name->setMaximumSize(QSize(INTERFACE::LABEL_TAB_NAME_WIDTH, INTERFACE::LABEL_TAB_NAME_HEIGHT));
    label_tab_name->setLayoutDirection(Qt::LeftToRight);
    label_tab_name->setAutoFillBackground(false);
    label_tab_name->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_LABEL_TAB_NAME_COLOR));
    label_tab_name->setAlignment(Qt::AlignCenter);

    horizontalLayout->addWidget(label_tab_name);


    label_ico->setText(QString());
    label_tab_name->setText(tab_name);


}
