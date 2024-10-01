#ifndef LABELCOPY_H
#define LABELCOPY_H


#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
class LabelCopy
{
public:
    LabelCopy(QWidget* widget);

    QHBoxLayout *value_copy;
    QLabel *value_Class;
    QPushButton *btn_Class;

};

#endif // LABELCOPY_H
