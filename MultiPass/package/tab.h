#ifndef TAB_H
#define TAB_H

#include "../tools/settings.h"
#include <QtWidgets/QWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
class Tab
{
public:
    Tab(QWidget* verticalLayoutWidget,QString tab_name);

    QWidget *widget;
    QHBoxLayout *horizontalLayout ;
    QLabel *label_ico;
    QLabel *label_tab_name ;


};

#endif // TAB_H
