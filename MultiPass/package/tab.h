#ifndef TAB_H
#define TAB_H

#include "../tools/settings.h"
#include "../tools/tabpushbutton.h"
#include "values.h"
#include "data_names.h"
#include <QtWidgets/QWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
class Tab:public QWidget
{
public:
    Tab(QString tab_name,bool email =true,bool login =true,bool password =true);
    // std::list<Values*> values_list;
    //QVBoxLayout *vertical_values;
    //QWidget *widget;
    TabPushButton* tab_btn;
    Data_names* data_names;
    QHBoxLayout *horizontalLayout ;
    // QLabel *label_ico;
    // QPushButton *label_tab_name ;
    // QSpacerItem* verticalSpacerValues;


    bool email_;
    bool login_;
    bool password_;

    void create_values_list(QWidget* scrollAreaWidgetContents_values);

    void visibleWidgets();
    void visiableLayoutWidgets(QHBoxLayout* layout);
private slots:
    void onButtonClicked();
};

#endif // TAB_H
