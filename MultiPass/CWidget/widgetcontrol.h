#ifndef WIDGETCONTROL_H
#define WIDGETCONTROL_H

#include <QWidget>
#include <QApplication>
#include <QDialog>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QCheckBox>

class WidgetControl: public QDialog
{

public:
    WidgetControl(QWidget *parent = nullptr);

    QString getInput();
};









#endif // WIDGETCONTROL_H

