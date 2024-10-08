#ifndef TABPUSHBUTTON_H
#define TABPUSHBUTTON_H



#include <QtWidgets/QWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>


class TabPushButton:public QPushButton
{
public:

    int a =13;
    explicit TabPushButton(const QString &text, QWidget *parent = nullptr):QPushButton(text,parent){};

    //:QPushButton(parent){};
};

#endif // TABPUSHBUTTON_H
