#ifndef DATA_H
#define DATA_H

#include <string>
#include <QtWidgets/QWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
class Data
{
public:
    Data(QString strEmail=NULL,QString strLogin = NULL,QString strPassword = NULL);
    bool viewEmail = true;
    bool viewLogin = true;
    bool viewPassword = true;

    QString email;
    QString login;
    QString password;
};

#endif // DATA_H
