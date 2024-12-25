#include "widgetcontrol.h"
#include "../tools/settings.h"
// WidgetControl::WidgetControl() {}


WidgetControl::WidgetControl(QWidget *parent) : QDialog(parent) {
    setWindowTitle("Введите значение");
    // resize(250,70);
    // setFixedSize(300, 100);
    setStyleSheet(
        "QDialog { background-color: rgb(57, 62, 70); }" // Фон диалога
        "QLabel { color: #FFFFFF; font-size: 16px; font-weight: bold; }" // Стиль текста
        "QCheckBox { color: #FFFFFF; font-size: 16px; font-weight: bold; }"
        "QLineEdit { background-color: #23272A; color: #FFFFFF; font-size: 14px; padding: 5px; border: 2px solid #7289DA; border-radius: 5px; }" // Поле ввода
        "QPushButton { background-color: #7289DA; color: #FFFFFF; font-size: 14px; font-weight: bold; border: none; padding: 10px; border-radius: 5px; }"
        "QPushButton:hover { background-color: #5B6EAE; }" // Эффект при наведении
        "QPushButton:pressed { background-color: #4E5E96; }" // Эффект при нажатии
        );

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setSpacing(5);
    layout->setContentsMargins(10, 10, 10, 10);
    //
    QVBoxLayout *layout_site = new QVBoxLayout(this);
    QHBoxLayout *hLayout = new QHBoxLayout();
    QLabel *label_site_input = new QLabel("Название сайта:", this);
    QLineEdit *input_site_name = new QLineEdit(this);

    hLayout->addWidget(label_site_input);
    hLayout->addWidget(input_site_name);

    layout_site->addLayout(hLayout);


    // end
    QCheckBox *checkBox_email = new QCheckBox("email", this);
    QCheckBox *checkBox_login = new QCheckBox("login", this);
    QCheckBox *checkBox_password = new QCheckBox("password", this);
    checkBox_email->setChecked(true); // Делаем чекбокс активированным по умолчанию
    checkBox_login->setChecked(true);
    checkBox_password->setChecked(true);
    // start layout control
    QVBoxLayout *layout_control = new QVBoxLayout(this);
    QHBoxLayout *hLayout_control = new QHBoxLayout();
    QPushButton *okButton = new QPushButton("Добавить", this);
    QPushButton *cancelButton = new QPushButton("Отмена", this);

    hLayout_control->addWidget(okButton);
    hLayout_control->addWidget(cancelButton);

    layout_control->addLayout(hLayout_control);
    // layout_control->addWidget(okButton);
    // layout_control->addWidget(cancelButton);
    // end

    layout->addLayout(layout_site);
    layout->addWidget(checkBox_email);
    layout->addWidget(checkBox_login);
    layout->addWidget(checkBox_password);
    layout->addLayout(layout_control);

    connect(okButton, &QPushButton::clicked, this, &QDialog::accept);
    connect(cancelButton, &QPushButton::clicked, this, &QDialog::reject);

    setModal(true);

}

QString WidgetControl::getInput()
{
    return findChild<QLineEdit *>()->text();
}
