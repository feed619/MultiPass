#include "datavalues.h"

DataValues::DataValues(QString strTabName,bool viewEmail_,bool viewLogin_,bool viewPassword_) {

    this->TabName = strTabName;
    this->viewEmail =  viewEmail_;
    this->viewLogin = viewLogin_;
    this->viewPassword = viewPassword_;
}

void DataValues::AddDataValue(QString strEmail,QString strLogin,QString strPassword)
{
    this->data_list.push_back(new Data(strEmail,strLogin,strPassword ));
    this->size++;
}
