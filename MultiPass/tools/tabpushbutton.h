#ifndef TABPUSHBUTTON_H
#define TABPUSHBUTTON_H


#include "../package/values.h"
#include "settings.h"
#include <QtWidgets/QWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>


class TabPushButton:public QPushButton
{
public:
    std::list<Values*> values_list;
    QHBoxLayout *horizontalLayout ;
    QLabel *label_ico;


    bool email_;
    bool login_;
    bool password_;
    explicit TabPushButton(const QString &text, QWidget *parent = nullptr);

    //:QPushButton(parent){};
};

#endif // TABPUSHBUTTON_H
