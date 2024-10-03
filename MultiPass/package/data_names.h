#ifndef DATA_NAMES_H
#define DATA_NAMES_H


#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtCore/QVariant>

class Data_names
{
public:
    Data_names(QWidget* widget);
    QHBoxLayout* horizontalLayout_values;
    QSpacerItem* space_values;

    QLabel* label_email;

    QSpacerItem *space_e_p;
    QLabel *label_password;

};

#endif // DATA_NAMES_H
