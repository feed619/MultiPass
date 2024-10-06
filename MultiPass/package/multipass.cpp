#include "multipass.h"

MultiPass::MultiPass()
{
    this->window = new QMainWindow();
    interface = new Interface(this->window);
    MultiPass::LoadDataValues();
    MultiPass::CreateTabsByDataValues();
    //MultiPass::CreateTabs();
    //MultiPass::visibleWidgets();
};

void MultiPass::LoadDataValues()
{
    this->data_values_list.push_back(new DataValues("Yoasd",true,true,true));
    DataValues* d_values = this->data_values_list.back();

    d_values->AddDataValue("asdasd@gmail.com","master","1235sad");
    d_values->AddDataValue("poipqwr@gmail.com","porok","512616");
    d_values->AddDataValue("qwpeo@gmail.com","srabik","74523d");
    d_values->AddDataValue("nqwme@gmail.com","bold","9127u4");
}

void MultiPass::CreateTabsByDataValues()
{
    Values *asd;
    for(DataValues* d_values:this->data_values_list)
    {
        tab_list.push_back(new Tab(interface->scrollAreaWidgetContents_values,d_values->TabName));
        Tab *tab = tab_list.back();
        interface->vertical_tab->insertLayout(interface->vertical_tab->count() - 1, tab_list.back()->horizontalLayout);
        for (Data* data:d_values->data_list)
        {
            tab->values_list.push_back(new Values(interface->scrollAreaWidgetContents_values,data->email,data->login,data->password));
            tab->vertical_values->insertLayout(tab->vertical_values->count() - 1, tab->values_list.back()->horizontalLayout); // Добавляем перед последним элементом (spacer)

        }
    }
}
void MultiPass::CreateTabs()
{
    for (int i = 1;i<=2;i++)
    {
        // if (i==8)
        //     tab_list.push_back(new Tab(interface->scrollAreaWidgetContents_values,"Youtube",false));
        // else
        tab_list.push_back(new Tab(interface->scrollAreaWidgetContents_values,"Youtube"));
        interface->vertical_tab->insertLayout(interface->vertical_tab->count() - 1, tab_list.back()->horizontalLayout);
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

void MultiPass::visibleWidgets()
{
    for(Values* value_:tab_list.back()->values_list)
    {
        for(LabelCopy* labelCopy_:value_->label_copy_list)
        {
            MultiPass::visiableLayoutWidgets(labelCopy_->horizontalLayout_value_copy);
            // for (int i = 0; i < labelCopy_->horizontalLayout_value_copy->count(); ++i) {
            //     QWidget *widget = labelCopy_->horizontalLayout_value_copy->itemAt(i)->widget();
            //     if (widget) {
            //         widget->setVisible(false);  // Переключаем видимость
            //     }
            // }
        }


        //MultiPass::visiableLayoutWidgets(case_->horizontalLayout_values);
    }
    // for (int i = 0; i < tab_list.back()->data_names->horizontalLayout_values->count(); ++i) {
    //     QWidget *widget = tab_list.back()->data_names->horizontalLayout_values->itemAt(i)->widget();
    //     if (widget) {
    //         widget->setVisible(false);  // Переключаем видимость
    //     }
    // }
}

void MultiPass::visiableLayoutWidgets(QHBoxLayout* layout)
{
    for (int i = 0; i < layout->count(); ++i) {
        QWidget *widget = layout->itemAt(i)->widget();
        if (widget) {
            widget->setVisible(widget->isVisible());
            //widget->deleteLater();
        }
    }
}
