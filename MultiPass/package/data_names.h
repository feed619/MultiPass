#ifndef DATA_NAMES_H
#define DATA_NAMES_H

#include "../tools/settings.h"
#include "case.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtCore/QVariant>
#include <list>

class Data_names
{
public:
    Data_names(QWidget* widget,bool email =true,bool login =true,bool password =true);
    QHBoxLayout* horizontalLayout_values;
    QSpacerItem* space_values;

    //QLabel* label_email;

    QSpacerItem *space_e_p;
    //QLabel *label_password;
    std::list<Case*> case_list;

    Case *case_email;
    Case *case_login;
    Case *case_password;

};

#endif // DATA_NAMES_H
