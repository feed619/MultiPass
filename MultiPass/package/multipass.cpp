#include "multipass.h"

MultiPass::MultiPass()
{
    this->window = new QMainWindow();
    interface = new Interface(this->window);
    MultiPass::create_tabs();
    //MultiPass::visibleWidgets();
};

void MultiPass::create_tabs()
{
    for (int i = 1;i<3;i++)
    {
        if (i==8)
            tab_list.push_back(new Tab(interface->scrollAreaWidgetContents_values,"Youtube",false));
        else
            tab_list.push_back(new Tab(interface->scrollAreaWidgetContents_values,"Youtube"));
        interface->vertical_tab->insertLayout(interface->vertical_tab->count() - 1, tab_list.back()->horizontalLayout);
        interface->horizontalLayout_main->addLayout(tab_list.back()->data_names->horizontalLayout_values);
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

void MultiPass::visibleWidgets()
{
    for(Case* case_:tab_list.back()->data_names->case_list)
    {
        MultiPass::visiableLayoutWidgets(case_->horizontalLayout_values);
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
            //widget->setVisible(widget->isVisible());
            widget->deleteLater();
        }
    }
}
