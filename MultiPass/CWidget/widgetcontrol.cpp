#include "widgetcontrol.h"
#include "../tools/settings.h"
// WidgetControl::WidgetControl() {}


WidgetControl::WidgetControl(QWidget *parent) : QDialog(parent) {
    setWindowTitle("Введите значение");
    setStyleSheet(
        "QDialog { background-color: rgb(57, 62, 70); }" // Фон диалога
        "QLabel { color: #FFFFFF; font-size: 16px; font-weight: bold; }" // Стиль текста
        "QLineEdit { background-color: #23272A; color: #FFFFFF; font-size: 14px; padding: 5px; border: 2px solid #7289DA; border-radius: 5px; }" // Поле ввода
        "QPushButton { background-color: #7289DA; color: #FFFFFF; font-size: 14px; font-weight: bold; border: none; padding: 10px; border-radius: 5px; }"
        "QPushButton:hover { background-color: #5B6EAE; }" // Эффект при наведении
        "QPushButton:pressed { background-color: #4E5E96; }" // Эффект при нажатии
        );
// parent->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_BACKGROUND_COLOR));
    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *label = new QLabel("Введите текст:", this);
    QLineEdit *inputField = new QLineEdit(this);
    QPushButton *okButton = new QPushButton("Ок", this);
    QPushButton *cancelButton = new QPushButton("Отмена", this);

    layout->addWidget(label);
    layout->addWidget(inputField);
    layout->addWidget(okButton);
    layout->addWidget(cancelButton);

    connect(okButton, &QPushButton::clicked, this, &QDialog::accept);
    connect(cancelButton, &QPushButton::clicked, this, &QDialog::reject);

    setModal(true);

}

QString WidgetControl::getInput()
{
    return findChild<QLineEdit *>()->text();
}
