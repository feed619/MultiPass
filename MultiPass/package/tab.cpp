#include "tab.h"

Tab::Tab(QWidget* scrollAreaWidgetContents_values,QString tab_name,bool email,bool login,bool password) {

    email_= email;
    login_ = login;
    password_ = password;
/*
    widget = new QWidget(centralwidget);
    widget->setObjectName("widget");
    widget->setGeometry(QRect(50, 630, 259, 41));
*/
    //data_names = new Data_names(scrollAreaWidgetContents_values,email_,login_,password_);

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setSpacing(0);
    horizontalLayout->setObjectName("horizontalLayout");
    //horizontalLayout->setContentsMargins(0, 0, 0, 0);
    label_ico = new QLabel();
    label_ico->setObjectName("label_ico");
    label_ico->setFixedSize(QSize(INTERFACE::LABEL_ICO_WIDTH, INTERFACE::LABEL_ICO_HEIGHT));
    label_ico->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_SCROLL_AREA_VALUES_COLOR));

    horizontalLayout->addWidget(label_ico);

    label_tab_name = new QPushButton();
    label_tab_name->setObjectName("label_tab_name");
    label_tab_name->setMaximumSize(QSize(INTERFACE::LABEL_TAB_NAME_WIDTH, INTERFACE::LABEL_TAB_NAME_HEIGHT));
    label_tab_name->setLayoutDirection(Qt::LeftToRight);
    label_tab_name->setAutoFillBackground(false);
    label_tab_name->setStyleSheet(QString::fromUtf8(INTERFACE::QSS_LABEL_TAB_NAME_COLOR));
    //label_tab_name->setAlignment(Qt::AlignCenter);

    horizontalLayout->addWidget(label_tab_name);


    label_ico->setText(QString());
    label_tab_name->setText(tab_name);

    // vertical_values = new QVBoxLayout(scrollAreaWidgetContents_values);
    // vertical_values->setObjectName("vertical_tab");
    // vertical_values->setContentsMargins(0, 0, 0, 0);
    // vertical_values->setSpacing(2);
    // verticalSpacerValues = new QSpacerItem(78, 218, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
    // vertical_values->addItem(verticalSpacerValues);

    //scrollArea_values->setWidget(scrollAreaWidgetContents_values);
    //horizont_data->addWidget(scrollArea_values);


    //Tab::create_values_list(scrollAreaWidgetContents_values);

}

// void Tab::create_values_list(QWidget* scrollAreaWidgetContents_values)
// {
//     for (int i = 1;i<=4;i++)
//     {
//         values_list.push_back(new Values(scrollAreaWidgetContents_values,email_,login_,password_));
//         vertical_values->insertLayout(vertical_values->count() - 1, values_list.back()->horizontalLayout); // Добавляем перед последним элементом (spacer)

//     }
// }
