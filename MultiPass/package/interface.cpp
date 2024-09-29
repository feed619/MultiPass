#include "interface.h"

Interface::Interface(QMainWindow *window) {

    if (window->objectName().isEmpty())
        window->setObjectName("MuliPass");
    window->resize(900,600);
    window->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 40, 49);"));
    centralwidget = new QWidget(window);
    centralwidget->setObjectName("centralwidget");
    layoutWidget = new QWidget(centralwidget);
    layoutWidget->setObjectName("layoutWidget");
    layoutWidget->setGeometry(QRect(0,0,900,608));
    vertical = new QVBoxLayout(layoutWidget);
    vertical->setSpacing(0);
    vertical->setObjectName("vertical");
    vertical->setContentsMargins(0,0,0,0);
    horizont_btns = new QHBoxLayout();
    horizont_btns->setSpacing(6);
    horizont_btns->setObjectName("horizont_btns");
    horizont_btns->setSizeConstraint(QLayout::SetDefaultConstraint);
    horizont_add_space = new QHBoxLayout();
    horizont_add_space->setObjectName("horizont_add_space");
    btn_add = new QPushButton(layoutWidget);
    btn_add->setObjectName("btn_add");
    btn_add->setMinimumSize(QSize(130, 40));
    btn_add->setMaximumSize(QSize(130, 40));
    QFont font;
    font.setFamilies({QString::fromUtf8("Britannic Bold")});
    font.setPointSize(30);
    btn_add->setFont(font);
    btn_add->setAcceptDrops(false);
    btn_add->setStyleSheet(QString::fromUtf8("color: rgb(68, 73, 80);\n"
                                             "background-color: rgb(238, 238, 238);"));

    horizont_add_space->addWidget(btn_add);

    space_add = new QSpacerItem(118, 60, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

    horizont_add_space->addItem(space_add);


    horizont_btns->addLayout(horizont_add_space);

    btn_new = new QPushButton(layoutWidget);
    btn_new->setObjectName("btn_new");
    btn_new->setMinimumSize(QSize(200, 30));
    btn_new->setMaximumSize(QSize(200, 30));
    QFont font1;
    font1.setFamilies({QString::fromUtf8("Britannic Bold")});
    font1.setPointSize(20);
    btn_new->setFont(font1);
    btn_new->setStyleSheet(QString::fromUtf8("color: rgb(68, 73, 80);\n"
                                             "background-color: rgb(238, 238, 238);"));

    horizont_btns->addWidget(btn_new);

    space_new_delete = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

    horizont_btns->addItem(space_new_delete);

    btn_delete = new QPushButton(layoutWidget);
    btn_delete->setObjectName("btn_delete");
    btn_delete->setMinimumSize(QSize(200, 30));
    btn_delete->setMaximumSize(QSize(200, 30));
    btn_delete->setFont(font1);
    btn_delete->setStyleSheet(QString::fromUtf8("color: rgb(68, 73, 80);\n"
                                                "background-color: rgb(238, 238, 238);"));

    horizont_btns->addWidget(btn_delete);


    vertical->addLayout(horizont_btns);

    frame_names = new QFrame(layoutWidget);
    frame_names->setObjectName("frame_names");
    frame_names->setMinimumSize(QSize(0, 30));
    frame_names->setMaximumSize(QSize(16777215, 30));
    frame_names->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 62, 70);"));
    frame_names->setFrameShape(QFrame::StyledPanel);
    frame_names->setFrameShadow(QFrame::Raised);
    layoutWidget_4 = new QWidget(frame_names);
    layoutWidget_4->setObjectName("layoutWidget_4");
    layoutWidget_4->setGeometry(QRect(-6, 0, 901, 32));
    horizont_names = new QHBoxLayout(layoutWidget_4);
    horizont_names->setObjectName("horizont_names");
    horizont_names->setContentsMargins(0, 0, 0, 0);
    label_tab = new QLabel(layoutWidget_4);
    label_tab->setObjectName("label_tab");
    label_tab->setMinimumSize(QSize(123, 20));
    label_tab->setMaximumSize(QSize(90, 20));
    label_tab->setFont(font1);
    label_tab->setStyleSheet(QString::fromUtf8("color: rgb(189, 190, 192);"));

    horizont_names->addWidget(label_tab);

    btn_search = new QPushButton(layoutWidget_4);
    btn_search->setObjectName("btn_search");
    btn_search->setMinimumSize(QSize(20, 20));
    btn_search->setMaximumSize(QSize(20, 20));

    horizont_names->addWidget(btn_search);

    lineEdit_search = new QLineEdit(layoutWidget_4);
    lineEdit_search->setObjectName("lineEdit_search");
    lineEdit_search->setMinimumSize(QSize(100, 20));
    lineEdit_search->setMaximumSize(QSize(90, 20));
    lineEdit_search->setStyleSheet(QString::fromUtf8("color: rgb(189, 190, 192);\n"
                                                     "background-color: rgb(238, 238, 238);"));

    horizont_names->addWidget(lineEdit_search);

    space_values = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

    horizont_names->addItem(space_values);

    label_email = new QLabel(layoutWidget_4);
    label_email->setObjectName("label_email");
    label_email->setMinimumSize(QSize(60, 20));
    label_email->setFont(font1);
    label_email->setStyleSheet(QString::fromUtf8("color: rgb(189, 190, 192);"));

    horizont_names->addWidget(label_email);

    space_e_p = new QSpacerItem(88, 27, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

    horizont_names->addItem(space_e_p);

    label_password = new QLabel(layoutWidget_4);
    label_password->setObjectName("label_password");
    label_password->setMinimumSize(QSize(60, 20));
    label_password->setFont(font1);
    label_password->setStyleSheet(QString::fromUtf8("color: rgb(189, 190, 192);"));

    horizont_names->addWidget(label_password);


    vertical->addWidget(frame_names);

    horizont_data = new QHBoxLayout();
    horizont_data->setSpacing(0);
    horizont_data->setObjectName("horizont_data");
    scrollArea_tab = new QScrollArea(layoutWidget);
    scrollArea_tab->setObjectName("scrollArea_tab");
    scrollArea_tab->setMinimumSize(QSize(250, 510));
    scrollArea_tab->setMaximumSize(QSize(260, 520));
    scrollArea_tab->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 62, 70);\n"
                                                    "border: 1px solid rgb(57,62,70);"));
    scrollArea_tab->setWidgetResizable(true);
    scrollAreaWidgetContents_tab = new QWidget();
    scrollAreaWidgetContents_tab->setObjectName("scrollAreaWidgetContents_tab");
    scrollAreaWidgetContents_tab->setGeometry(QRect(0, 0, 248, 508));
    scrollArea_tab->setWidget(scrollAreaWidgetContents_tab);

    horizont_data->addWidget(scrollArea_tab);

    scrollArea_values = new QScrollArea(layoutWidget);
    scrollArea_values->setObjectName("scrollArea_values");
    scrollArea_values->setMinimumSize(QSize(650, 510));
    scrollArea_values->setMaximumSize(QSize(650, 520));
    scrollArea_values->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
    scrollArea_values->setWidgetResizable(true);
    scrollAreaWidgetContents_values = new QWidget();
    scrollAreaWidgetContents_values->setObjectName("scrollAreaWidgetContents_values");
    scrollAreaWidgetContents_values->setGeometry(QRect(0, 0, 648, 508));
    scrollArea_values->setWidget(scrollAreaWidgetContents_values);

    horizont_data->addWidget(scrollArea_values);


    vertical->addLayout(horizont_data);

    widget = new QWidget(centralwidget);
    widget->setObjectName("widget");
    widget->setGeometry(QRect(50, 630, 259, 41));
    horizontalLayout = new QHBoxLayout(widget);
    horizontalLayout->setSpacing(3);
    horizontalLayout->setObjectName("horizontalLayout");
    horizontalLayout->setContentsMargins(0, 0, 0, 0);
    label_ico = new QLabel(widget);
    label_ico->setObjectName("label_ico");
    label_ico->setMinimumSize(QSize(40, 40));
    label_ico->setMaximumSize(QSize(40, 40));
    label_ico->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
                                               "font: 25pt \"Britannic Bold\";"));

    horizontalLayout->addWidget(label_ico);

    label_tab_name = new QLabel(widget);
    label_tab_name->setObjectName("label_tab_name");
    label_tab_name->setMinimumSize(QSize(0, 40));
    label_tab_name->setMaximumSize(QSize(16777215, 40));
    label_tab_name->setLayoutDirection(Qt::LeftToRight);
    label_tab_name->setAutoFillBackground(false);
    label_tab_name->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
                                                    "color: rgb(34, 40, 49);\n"
                                                    "font: 25pt \"Britannic Bold\";"));
    label_tab_name->setAlignment(Qt::AlignCenter);

    horizontalLayout->addWidget(label_tab_name);

    window->setCentralWidget(centralwidget);

    window->setWindowTitle(QCoreApplication::translate("MultiPass", "MultiPass", nullptr));
    btn_add->setText(QCoreApplication::translate("MultiPass", "add", nullptr));
    btn_new->setText(QCoreApplication::translate("MultiPass", "new account", nullptr));
    btn_delete->setText(QCoreApplication::translate("MultiPass", "delete account", nullptr));
    label_tab->setText(QCoreApplication::translate("MultiPass", "  site", nullptr));
    btn_search->setText(QCoreApplication::translate("MultiPass", "s", nullptr));
    label_email->setText(QCoreApplication::translate("MultiPass", "email", nullptr));
    label_password->setText(QCoreApplication::translate("MultiPass", "password", nullptr));
    label_ico->setText(QString());
#if QT_CONFIG(tooltip)
    label_tab_name->setToolTip(QCoreApplication::translate("MultiPass", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
    label_tab_name->setText(QCoreApplication::translate("MultiPass", "Youtube", nullptr));

    QMetaObject::connectSlotsByName(window);
}
