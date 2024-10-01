#include "interface.h"

Interface::Interface(QMainWindow *window) {


    font_big.setFamilies({QString::fromUtf8(INTERFACE::FONT_NAME)});
    font_big.setPointSize(INTERFACE::FONT_BIG_SIZE);

    font_middle.setFamilies({QString::fromUtf8(INTERFACE::FONT_NAME)});
    font_middle.setPointSize(INTERFACE::FONT_MIDDLE_SIZE);

    if (window->objectName().isEmpty())
        window->setObjectName(INTERFACE::WINDOW_NAME);
    window->resize(INTERFACE::WINDOW_WIDTH,INTERFACE::WINDOW_HEIGHT);
    window->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_BACKGROUND_COLOR));
    centralwidget = new QWidget(window);
    centralwidget->setObjectName("centralwidget");
    layoutWidget = new QWidget(centralwidget);
    layoutWidget->setObjectName("layoutWidget");
    layoutWidget->setGeometry(QRect(0,0,INTERFACE::WINDOW_WIDTH,INTERFACE::WINDOW_HEIGHT));
    vertical = new QVBoxLayout(layoutWidget);
    vertical->setSpacing(0);
    vertical->setObjectName("vertical");
    vertical->setContentsMargins(0,0,0,0);

    Interface::create_control_buttons();
    Interface::create_frame_names();
    Interface::create_horizont_data();




    //
    window->setCentralWidget(centralwidget);


    window->setWindowTitle(QCoreApplication::translate("MultiPass", "MultiPass", nullptr));
    btn_add->setText(QCoreApplication::translate("MultiPass", "add", nullptr));
    btn_new->setText(QCoreApplication::translate("MultiPass", "new account", nullptr));
    btn_delete->setText(QCoreApplication::translate("MultiPass", "delete account", nullptr));
    label_tab->setText(QCoreApplication::translate("MultiPass", "site", nullptr));
    btn_search->setText(QCoreApplication::translate("MultiPass", "s", nullptr));
    label_email->setText(QCoreApplication::translate("MultiPass", "email", nullptr));
    label_password->setText(QCoreApplication::translate("MultiPass", "password", nullptr));



    /*
    label_ico->setText(QString());
#if QT_CONFIG(tooltip)
    label_tab_name->setToolTip(QCoreApplication::translate("MultiPass", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
    label_tab_name->setText(QCoreApplication::translate("MultiPass", "Youtube", nullptr));
*/
    QMetaObject::connectSlotsByName(window);
}


void Interface::create_control_buttons()
{
    horizont_btns = new QHBoxLayout();
    horizont_btns->setSpacing(6);
    horizont_btns->setObjectName("horizont_btns");
    horizont_btns->setSizeConstraint(QLayout::SetDefaultConstraint);
    horizont_add_space = new QHBoxLayout();
    horizont_add_space->setObjectName("horizont_add_space");
    btn_add = new QPushButton(layoutWidget);
    btn_add->setObjectName("btn_add");
    btn_add->setFixedSize(QSize(INTERFACE::BUTTON_ADD_WIDTH, INTERFACE::BUTTON_ADD_HEIGHT));
    btn_add->setFont(font_big);
    btn_add->setAcceptDrops(false);
    btn_add->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_BUTTON_COLOR));

    horizont_add_space->addWidget(btn_add);

    space_add = new QSpacerItem(118, 60, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

    horizont_add_space->addItem(space_add);


    horizont_btns->addLayout(horizont_add_space);

    btn_new = new QPushButton(layoutWidget);
    btn_new->setObjectName("btn_new");
    btn_new->setFixedSize(QSize(INTERFACE::BUTTON_WIDTH, INTERFACE::BUTTON_HEIGHT));
    btn_new->setFont(font_middle);
    btn_new->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_BUTTON_COLOR));

    horizont_btns->addWidget(btn_new);

    space_new_delete = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

    horizont_btns->addItem(space_new_delete);

    btn_delete = new QPushButton(layoutWidget);
    btn_delete->setObjectName("btn_delete");
    btn_delete->setFixedSize(QSize(INTERFACE::BUTTON_WIDTH, INTERFACE::BUTTON_HEIGHT));
    btn_delete->setFont(font_middle);
    btn_delete->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_BUTTON_COLOR));

    horizont_btns->addWidget(btn_delete);


    vertical->addLayout(horizont_btns);
}

void Interface::create_frame_names(){

    frame_names = new QFrame(layoutWidget);
    frame_names->setObjectName("frame_names");
    frame_names->setFixedSize(QSize(INTERFACE::FRAME_WIDTH, INTERFACE::FRAME_HEIGHT));
    frame_names->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_BACKGROUND_FRAME_COLOR));
    frame_names->setFrameShape(QFrame::StyledPanel);
    frame_names->setFrameShadow(QFrame::Raised);
    layoutWidget_4 = new QWidget(frame_names);
    layoutWidget_4->setObjectName("layoutWidget_4");
    layoutWidget_4->setGeometry(QRect(2, 0, 901, 32));
    horizont_names = new QHBoxLayout(layoutWidget_4);
    horizont_names->setObjectName("horizont_names");
    horizont_names->setContentsMargins(0, 0, 0, 0);
    label_tab = new QLabel(layoutWidget_4);
    label_tab->setObjectName("label_tab");
    label_tab->setFixedSize(QSize(INTERFACE::LABEL_SITE_WIDTH, INTERFACE::LABEL_SITE_HEIGHT));
    label_tab->setFont(font_middle);
    label_tab->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_TAB_LABEL_COLOR));
    //label_tab->setStyleSheet("QLabel:hover { background-color: yellow; }"
    //                         "QLabel {color: rgb(189, 190, 192);}");

    horizont_names->addWidget(label_tab);

    btn_search = new QPushButton(layoutWidget_4);
    btn_search->setObjectName("btn_search");
    btn_search->setFixedSize(QSize(INTERFACE::BUTTON_SEARCH_WIDTH, INTERFACE::BUTTON_SEARCH_HEIGHT));
    btn_search->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_BUTTON_SEARCH_COLOR));


    horizont_names->addWidget(btn_search);

    lineEdit_search = new QLineEdit(layoutWidget_4);
    lineEdit_search->setObjectName("lineEdit_search");
    lineEdit_search->setFixedSize(QSize(INTERFACE::LINE_EDIT_WIDTH, INTERFACE::LINE_EDIT_HEIGHT));
    lineEdit_search->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_LABEL_EDIT_COLOR));
    horizont_names->addWidget(lineEdit_search);

    space_values = new QSpacerItem(24, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

    horizont_names->addItem(space_values);

    label_email = new QLabel(layoutWidget_4);
    label_email->setObjectName("label_email");
    label_email->setFixedSize(QSize(INTERFACE::LINE_EMAIL_WIDTH, INTERFACE::LINE_EMAIL_HEIGHT));
    label_email->setFont(font_middle);
    label_email->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_TAB_LABEL_COLOR));

    horizont_names->addWidget(label_email);

    space_e_p = new QSpacerItem(88, 27, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

    horizont_names->addItem(space_e_p);

    label_password = new QLabel(layoutWidget_4);
    label_password->setObjectName("label_password");
    label_password->setFixedSize(QSize(INTERFACE::LINE_PASSWORD_WIDTH, INTERFACE::LINE_PASSWORD_HEIGHT));
    label_password->setFont(font_middle);
    label_password->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_TAB_LABEL_COLOR));

    horizont_names->addWidget(label_password);


    vertical->addWidget(frame_names);

}

void Interface::create_horizont_data()
{

    horizont_data = new QHBoxLayout();
    horizont_data->setSpacing(0);

    horizont_data->setObjectName("horizont_data");

    Interface::create_scrollArea_tab();
    Interface::create_tab_list();

    Interface::create_scrollArea_values();
    Interface::create_values_list();
    vertical->addLayout(horizont_data);


}

void Interface::create_scrollArea_tab(){

    scrollArea_tab = new QScrollArea(layoutWidget);
    scrollArea_tab->setObjectName("scrollArea_tab");
    scrollArea_tab->setFixedSize(QSize(INTERFACE::SCROLL_AREA_TAB_WIDTH, INTERFACE::SCROLL_AREA_TAB_HEIGHT));
    scrollArea_tab->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_SCROLL_AREA_TAB_COLOR));
    scrollArea_tab->setWidgetResizable(true);
    scrollAreaWidgetContents_tab = new QWidget();
    scrollAreaWidgetContents_tab->setObjectName("scrollAreaWidgetContents_tab");
    scrollAreaWidgetContents_tab->setGeometry(QRect(0, 0, INTERFACE::SCROLL_AREA_TAB_WIDTH, INTERFACE::SCROLL_AREA_TAB_HEIGHT));
    //verticalLayoutWidget = new QWidget(scrollAreaWidgetContents_tab);
    //verticalLayoutWidget->setObjectName("verticalLayoutWidget");
    //verticalLayoutWidget->setGeometry(QRect(0, 0, 251, 511));
    vertical_tab = new QVBoxLayout(scrollAreaWidgetContents_tab);
    vertical_tab->setObjectName("vertical_tab");
    vertical_tab->setContentsMargins(0, 0, 0, 0);
    vertical_tab->setSpacing(2);


    scrollArea_tab->setWidget(scrollAreaWidgetContents_tab);

    horizont_data->addWidget(scrollArea_tab);

    verticalSpacer = new QSpacerItem(78, 218, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
    vertical_tab->addItem(verticalSpacer);



}

void Interface::create_scrollArea_values()
{

    scrollArea_values = new QScrollArea(layoutWidget);
    scrollArea_values->setObjectName("scrollArea_values");
    scrollArea_values->setMinimumSize(QSize(650, 510));
    scrollArea_values->setMaximumSize(QSize(650, 520));
    scrollArea_values->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
    scrollArea_values->setWidgetResizable(true);
    scrollAreaWidgetContents_values = new QWidget();
    scrollAreaWidgetContents_values->setObjectName("scrollAreaWidgetContents_values");
    scrollAreaWidgetContents_values->setGeometry(QRect(0, 0, 648, 518));

    vertical_values = new QVBoxLayout(scrollAreaWidgetContents_values);
    vertical_values->setObjectName("vertical_tab");
    vertical_values->setContentsMargins(0, 0, 0, 0);
    vertical_values->setSpacing(2);


    //widget = new QWidget(scrollAreaWidgetContents_values);
    //widget->setObjectName("widget");
    //widget->setGeometry(QRect(0, 0, 651, 31));



    scrollArea_values->setWidget(scrollAreaWidgetContents_values);
    horizont_data->addWidget(scrollArea_values);

    verticalSpacerValues = new QSpacerItem(78, 218, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
    vertical_values->addItem(verticalSpacerValues);

    //containerWidget1->setLayout(tab_list.back()->horizontalLayout);
    //values_list->insertLayout(values_list->count() - 1, values_list.back()->horizontalLayout); // Добавляем перед последним элементом (spacer)

    //values_list.push_back(new Values(widget));
   // values_list.push_back(new Values(widget));
    //values_list.push_back(new Values(widget));

/*
    scrollArea_values = new QScrollArea(layoutWidget);
    scrollArea_values->setObjectName("scrollArea_values");
    scrollArea_values->setFixedSize(QSize(INTERFACE::SCROLL_AREA_VALUES_WIDTH, INTERFACE::SCROLL_AREA_VALUES_HEIGHT));
    scrollArea_values->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_SCROLL_AREA_VALUES_COLOR));
    scrollArea_values->setWidgetResizable(true);

    scrollAreaWidgetContents_values = new QWidget();
    scrollAreaWidgetContents_values->setObjectName("scrollAreaWidgetContents_values");
    scrollAreaWidgetContents_values->setGeometry(QRect(0, 0, 648, 508));

    vertical_values = new QVBoxLayout(scrollAreaWidgetContents_values);
    vertical_values->setObjectName("vertical_values");
    vertical_values->setContentsMargins(0, 0, 0, 0);
    vertical_values->setSpacing(2);

    scrollArea_values->setWidget(scrollAreaWidgetContents_values);

    horizont_data->addWidget(scrollArea_values);

    verticalSpacerValues = new QSpacerItem(78, 218, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
    vertical_values->addItem(verticalSpacerValues);



    values_list.push_back(new Values(scrollAreaWidgetContents_tab));
    //vertical_values->insertLayout(vertical_values->count() - 1, values_list.back()->horizontalLayout); // Добавляем перед последним элементом (spacer)
    vertical_values->addWidget(values_list.back()->frame_values);

*/
}
void Interface::create_tab_list()
{
    for (int i = 1;i<25;i++)
    {
        tab_list.push_back(new Tab(scrollAreaWidgetContents_tab,"Youtube"));
        //containerWidget1->setLayout(tab_list.back()->horizontalLayout);
        vertical_tab->insertLayout(vertical_tab->count() - 1, tab_list.back()->horizontalLayout); // Добавляем перед последним элементом (spacer)
    }
}

void Interface::create_values_list()
{
    for (int i = 1;i<25;i++)
    {
        values_list.push_back(new Values(scrollAreaWidgetContents_tab));
        vertical_values->insertLayout(vertical_values->count() - 1, values_list.back()->horizontalLayout); // Добавляем перед последним элементом (spacer)

    }
}
