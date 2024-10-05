/********************************************************************************
** Form generated from reading UI file 'multipass.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MULTIPASS_H
#define MULTIPASS_H

#include "tab.h"
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "interface.h"
#include <list>

QT_BEGIN_NAMESPACE

class MultiPass
{
public:
    MultiPass();
    QMainWindow *window;
    Interface *interface;
    std::list<Tab*> tab_list;
    Tab* mainTab;
    void create_tabs();
    void visibleWidgets();
    void visiableLayoutWidgets(QHBoxLayout* layout);
};


QT_END_NAMESPACE

#endif // MULTIPASS_H
