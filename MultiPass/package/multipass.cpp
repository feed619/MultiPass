#include "multipass.h"

MultiPass::MultiPass()
{
    this->window = new QMainWindow();
    interface = new Interface(this->window);

    connect(interface->btn_add, &QPushButton::clicked, this, &MultiPass::onAddButtonClicked);

    MultiPass::LoadDataValues();
    MultiPass::CreateTabsByDataValues();

    MultiPass::visiableDataNames(true,true,true);
    //MultiPass::CreateTabs();
    // MultiPass::visibleWidgets();
};

void MultiPass::LoadDataValues()
{
    this->data_values_list.push_back(new DataValues("Yoasd",true,true,true));
    DataValues* d_values = this->data_values_list.back();

    d_values->AddDataValue("asdasd@gmail.com","master","1235sad");
    d_values->AddDataValue("poipqwr@gmail.com","porok","512616");
    d_values->AddDataValue("qwpeo@gmail.com","srabik","74523d");
    d_values->AddDataValue("nqwme@gmail.com","bold","9127u4");

    this->data_values_list.push_back(new DataValues("twitch",true,true,true));
    DataValues* d_values1 = this->data_values_list.back();

    d_values1->AddDataValue("qkewpksd@gmail.com","jkasd","1235sad");
    d_values1->AddDataValue("oooooo@gmail.com","porok","512616");
    d_values1->AddDataValue("12dasdj@gmail.com","srabik","74523d");
    d_values1->AddDataValue("lASIBQWE@gmail.com","bold","9127u4");
    d_values1->AddDataValue("lASIBQWE@gmail.com","bold","9127u4");
    d_values1->AddDataValue("lASIBQWE@gmail.com","bold","9127u4");
    d_values1->AddDataValue("lASIBQWE@gmail.com","bold","9127u4");
    d_values1->AddDataValue("lASIBQWE@gmail.com","bold","9127u4");
}

void MultiPass::CreateTabsByDataValues()
{
    for(DataValues* d_values:this->data_values_list)
    {
        tab_list.push_back(new Tab(d_values->TabName));
        qDebug()<<d_values->TabName;
        Tab *tab = tab_list.back();

        //window->connect(tab->tab_btn,&QAbstractButton::clicked,this->window,&MultiPass::onButtonClicked,Qt::ConnectionType::AutoConnection);
        // TabPushButton::connect(tab->tab_btn,&TabPushButton::clicked, window, &MultiPass::onButtonClicked);
        //QMainWindow::connect(tab->tab_btn,&TabPushButton::clicked, this, &MultiPass::onButtonClicked);
        interface->vertical_tab->insertLayout(interface->vertical_tab->count() - 1, tab->horizontalLayout);
        for (Data* data:d_values->data_list)
        {
            tab->tab_btn->values_list.push_back(new Values(interface->scrollAreaWidgetContents_values,data->email,data->login,data->password));
            interface->vertical_values->insertLayout(interface->vertical_values->count() - 1, tab->tab_btn->values_list.back()->horizontalLayout); // Добавляем перед последним элементом (spacer)
        }
        MultiPass::visibleWidgets(tab);
        connect(tab->tab_btn, &QPushButton::clicked, this, &MultiPass::onButtonClicked);


        //MultiPass::visibleWidgets(tab);
    }
}
void MultiPass::CreateTabs()
{
    for (int i = 1;i<=2;i++)
    {
        // if (i==8)
        //     tab_list.push_back(new Tab(interface->scrollAreaWidgetContents_values,"Youtube",false));
        // else
// tab_list.push_back(new Tab(interface->scrollAreaWidgetContents_values,"Youtube"));
// interface->vertical_tab->insertLayout(interface->vertical_tab->count() - 1, tab_list.back()->horizontalLayout);
        //interface->horizontalLayout_main->addLayout(tab_list.back()->data_names->horizontalLayout_values);
        //tab_list.back()->horizontalLayout->itemAt(2)->widget()->setVisible(false);
        //tab_list.back()->values_list.back()->horizontalLayout;

        // for (int i = 0; i < tab_list.back()->values_list.back()->horizontalLayout->count(); ++i) {
        //     QWidget *widget = tab_list.back()->values_list.back()->horizontalLayout->itemAt(i)->widget();
        //     if (widget) {
        //         widget->setVisible(false);  // Переключаем видимость
        //     }
        // }

        // ------
        // for (int i = 0; i < tab_list.back()->values_list.back()->label_copy_list.back()->horizontalLayout_value_copy->count(); ++i) {
        //     QWidget *widget = tab_list.back()->values_list.back()->label_copy_list.back()->horizontalLayout_value_copy->itemAt(i)->widget();
        //     if (widget) {
        //         widget->setVisible(false);  // Переключаем видимость
        //     }
        // }

        // ------
        //containerWidget1->setLayout(tab_list.back()->horizontalLayout);
    }
}

void MultiPass::visibleWidgets(Tab* tab)
{
    for(Values* value_:tab->tab_btn->values_list)
    {
        for(LabelCopy* labelCopy_:value_->label_copy_list)
        {
            MultiPass::visiableLayoutWidgets(labelCopy_->horizontalLayout_value_copy);
        }
    }
}

void MultiPass::visiableLayoutWidgets(QHBoxLayout* layout)
{
    for (int i = 0; i < layout->count(); ++i) {
        QWidget *widget = layout->itemAt(i)->widget();
        if (widget) {
            //qDebug()<<widget->isHidden();
            widget->setVisible(widget->isHidden());
        }
    }
}

void MultiPass::visiableDataNames(bool email,bool login,bool password){

    if (email)
    {
        MultiPass::visiableLayoutWidgets(interface->data_names->case_email->horizontalLayout_values);
    }
    if (login)
    {
        MultiPass::visiableLayoutWidgets(interface->data_names->case_login->horizontalLayout_values);
    }
    if (password)
    {
        MultiPass::visiableLayoutWidgets(interface->data_names->case_password->horizontalLayout_values);
    }
}

void MultiPass::onButtonClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    if (clickedButton) {
        //qDebug() << clickedButton->text() << "was clicked!";
        // mainTab = clickedButton;
        qDebug() << clickedButton;
        for (Tab *tab :this->tab_list)
        {
            if (tab->tab_btn == clickedButton)
            {
                if (mainTab==tab)
                {
                    qDebug() <<"Повторное нажатие";
                    break;
                }
                else if (mainTab)
                {
                    qDebug() <<"Старое удалил новое добавил";
                    MultiPass::visibleWidgets(mainTab);
                    mainTab = tab;
                    MultiPass::visibleWidgets(mainTab);
                }
                else
                {
                    mainTab = tab;
                    MultiPass::visibleWidgets(mainTab);
                }
            }
        }

    }
}


void MultiPass::onAddButtonClicked()
{
    // widget_ctrl= new WidgetControl();
    WidgetControl w_c = WidgetControl();
    if (w_c.exec() == QDialog::Accepted) {
        QString userInput = w_c.getInput();
        if (!userInput.isEmpty())
        {
            qDebug() << "Пользователь ввел:" << userInput;
            this->data_values_list.push_back(new DataValues(userInput,true,true,true));
            DataValues* d_values = this->data_values_list.back();

            tab_list.push_back(new Tab(d_values->TabName));
            qDebug()<<d_values->TabName;
            Tab *tab = tab_list.back();
            interface->vertical_tab->insertLayout(interface->vertical_tab->count() - 1, tab->horizontalLayout);

            MultiPass::visibleWidgets(tab);
            connect(tab->tab_btn, &QPushButton::clicked, this, &MultiPass::onButtonClicked);

        }

    }
}
