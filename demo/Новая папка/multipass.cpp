#include "multipass.h"
#include "./ui_multipass.h"

MultiPass::MultiPass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MultiPass)
{
    ui->setupUi(this);
    ui->vertical_tab->addItem(ui->horizontalLayout);
}

MultiPass::~MultiPass()
{
    delete ui;
}
