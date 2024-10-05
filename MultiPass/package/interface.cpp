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


    window->setCentralWidget(centralwidget);


    window->setWindowTitle(QCoreApplication::translate("MultiPass", "MultiPass", nullptr));
    btn_add->setText(QCoreApplication::translate("MultiPass", "    add", nullptr));
    btn_new->setText(QCoreApplication::translate("MultiPass", "new account", nullptr));
    btn_delete->setText(QCoreApplication::translate("MultiPass", "delete account", nullptr));
    label_tab->setText(QCoreApplication::translate("MultiPass", "site", nullptr));
    btn_search->setText(QCoreApplication::translate("MultiPass", "Y", nullptr));

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

    space_add = new QSpacerItem(115, 60, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

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

    Interface::create_tab_names();
    //Interface::create_data_names();
    space_e_p_2 = new QSpacerItem(10, 27, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);
    horizontalLayout_main->addItem(space_e_p_2);
    horizontalLayout_main->setStretch(0, 2);

    vertical->addWidget(frame_names);

}
void Interface::create_tab_names()
{

    widget = new QWidget(frame_names);
    widget->setObjectName("widget");
    widget->setGeometry(QRect(0, 0, 900, 30));
    horizontalLayout_main = new QHBoxLayout(widget);
    horizontalLayout_main->setObjectName("horizontalLayout_main");
    horizontalLayout_main->setContentsMargins(0, 0, 0, 0);
    horizontalLayout_tab = new QHBoxLayout();
    horizontalLayout_tab->setObjectName("horizontalLayout_tab");
    horizontalLayout_tab->setSizeConstraint(QLayout::SetMaximumSize);

    label_tab = new QLabel(widget);
    label_tab->setObjectName("label_tab");
    label_tab->setFixedSize(QSize(INTERFACE::LABEL_SITE_WIDTH, INTERFACE::LABEL_SITE_HEIGHT));
    label_tab->setFont(font_middle);
    label_tab->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_TAB_LABEL_COLOR));

    horizontalLayout_tab->addWidget(label_tab);

    lineEdit_search = new QLineEdit(widget);
    lineEdit_search->setObjectName("lineEdit_search");
    lineEdit_search->setFixedSize(QSize(INTERFACE::LINE_EDIT_WIDTH, INTERFACE::LINE_EDIT_HEIGHT));
    lineEdit_search->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_LABEL_EDIT_COLOR));

    horizontalLayout_tab->addWidget(lineEdit_search);

    btn_search = new QPushButton(widget);
    btn_search->setObjectName("btn_search");
    btn_search->setFixedSize(QSize(INTERFACE::BUTTON_SEARCH_WIDTH, INTERFACE::BUTTON_SEARCH_HEIGHT));
    btn_search->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_BUTTON_SEARCH_COLOR));
    horizontalLayout_tab->addWidget(btn_search);


    horizontalLayout_main->addLayout(horizontalLayout_tab);
}

void Interface::create_data_names()
{

    data_names = new Data_names(widget,false);
    horizontalLayout_main->addLayout(data_names->horizontalLayout_values);

}
void Interface::create_horizont_data()
{

    horizont_data = new QHBoxLayout();
    horizont_data->setSpacing(0);

    horizont_data->setObjectName("horizont_data");

    Interface::create_scrollArea_values();

    Interface::create_scrollArea_tab();
    //Interface::create_tab_list();


    scrollArea_values->setWidget(scrollAreaWidgetContents_values);
    horizont_data->addWidget(scrollArea_values);

    //Interface::create_values_list();

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
    scrollArea_values->setFixedSize(QSize(INTERFACE::SCROLL_AREA_VALUES_WIDTH, INTERFACE::SCROLL_AREA_VALUES_HEIGHT));
    scrollArea_values->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_SCROLL_AREA_VALUES_COLOR));
    scrollArea_values->setWidgetResizable(true);
    scrollAreaWidgetContents_values = new QWidget();
    scrollAreaWidgetContents_values->setObjectName("scrollAreaWidgetContents_values");
    scrollAreaWidgetContents_values->setGeometry(QRect(0, 0, INTERFACE::SCROLL_AREA_VALUES_WIDTH, INTERFACE::SCROLL_AREA_VALUES_HEIGHT));

}
void Interface::create_tab_list()
{
    for (int i = 1;i<2;i++)
    {
        if (i==2)
        tab_list.push_back(new Tab(scrollAreaWidgetContents_values,"Youtube",false));
        else
            tab_list.push_back(new Tab(scrollAreaWidgetContents_values,"Youtube"));
        vertical_tab->insertLayout(vertical_tab->count() - 1, tab_list.back()->horizontalLayout); // Добавляем перед последним элементом (spacer)
        horizontalLayout_main->addLayout(tab_list.back()->data_names->horizontalLayout_values);
        //tab_list.back()->horizontalLayout->itemAt(2)->widget()->setVisible(false);
        //tab_list.back()->values_list.back()->horizontalLayout;

                    // for (int i = 0; i < tab_list.back()->values_list.back()->horizontalLayout->count(); ++i) {
                    //     QWidget *widget = tab_list.back()->values_list.back()->horizontalLayout->itemAt(i)->widget();
                    //     if (widget) {
                    //         widget->setVisible(false);  // Переключаем видимость
                    //     }
                    // }


        for (int i = 0; i < tab_list.back()->values_list.back()->label_copy_list.back()->horizontalLayout_value_copy->count(); ++i) {
            QWidget *widget = tab_list.back()->values_list.back()->label_copy_list.back()->horizontalLayout_value_copy->itemAt(i)->widget();
            if (widget) {
                widget->setVisible(false);  // Переключаем видимость
            }
        }
        //containerWidget1->setLayout(tab_list.back()->horizontalLayout);
    }
}

void Interface::create_values_list()
{
    for (int i = 1;i<7;i++)
    {
        values_list.push_back(new Values(scrollAreaWidgetContents_values));
        vertical_values->insertLayout(vertical_values->count() - 1, values_list.back()->horizontalLayout); // Добавляем перед последним элементом (spacer)

    }
}
