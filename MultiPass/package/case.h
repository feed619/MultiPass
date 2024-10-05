#ifndef CASE_H
#define CASE_H
#include "../tools/settings.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtCore/QVariant>

class Case
{
public:
    Case(QWidget* widget, QString name);
    QWidget * container_widget;
    QHBoxLayout* horizontalLayout_values;
    QLabel* label_name;
    QPushButton* btn_view;
    QSpacerItem *space_n_b;
};

#endif // CASE_H
