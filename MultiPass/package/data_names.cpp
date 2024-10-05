#include "data_names.h"

Data_names::Data_names(QWidget* widget,
                    bool email,
                    bool login,
                    bool password)
{


    horizontalLayout_values = new QHBoxLayout();
    horizontalLayout_values->setObjectName("horizontalLayout_values");
    space_values = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

    horizontalLayout_values->addItem(space_values);

    if (email)
    {
        case_email = new Case(widget,"email");
        case_list.push_back(case_email);
        horizontalLayout_values->addItem(case_email->horizontalLayout_values);
    }

    //case_email->container_widget->hide();
    if (login)
    {
        case_login= new Case(widget,"login");
        case_list.push_back(case_login);
        horizontalLayout_values->addItem(case_login->horizontalLayout_values);
        //horizontalLayout_values->removeItem(case_login->horizontalLayout_values);
    }
    if (password)
    {
        case_password= new Case(widget,"password");
        case_list.push_back(case_password);
        horizontalLayout_values->addItem(case_password->horizontalLayout_values);
    }

    //case_password->horizontalLayout_values->itemAt(2)->widget()->setVisible(false);
    // for (int i = 0; i < case_password->horizontalLayout_values->count(); ++i) {
    //     QWidget *widget = case_password->horizontalLayout_values->itemAt(i)->widget();
    //     if (widget) {
    //         widget->setVisible(false);  // Переключаем видимость
    //     }
    // }
}
