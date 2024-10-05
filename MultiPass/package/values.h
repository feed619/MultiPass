#ifndef VALUES_H
#define VALUES_H


#include <list>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <QtWidgets/QFrame>
#include "labelcopy.h"

class Values
{
public:
    Values(QWidget* verticalLayoutWidget,bool email =true,bool login =true,bool password =true);

    QHBoxLayout *value_copy;
    QLabel *value_Class;
    QPushButton *btn_Class;


    QHBoxLayout *horizontalLayout;
    QFrame *frame_values;
    std::list<LabelCopy*> label_copy_list;
    QWidget* widget;
};

#endif // VALUES_H
