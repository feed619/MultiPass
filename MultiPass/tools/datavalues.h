#ifndef DATAVALUES_H
#define DATAVALUES_H

#include "data.h"
#include <list>
#include <string>

#include <QtWidgets/QWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

class DataValues
{
public:

    QString TabName;
    bool viewEmail;
    bool viewLogin;
    bool viewPassword;

    int size = 0;
    DataValues(QString strTabName,bool viewEmail_,bool viewLogin_,bool viewPassword_);
    std::list<Data*> data_list;

    void AddDataValue(QString strEmail,QString strLogin,QString strPassword);
};

#endif // DATAVALUES_H
