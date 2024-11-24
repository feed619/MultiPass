#include "widgetcontrol.h"

// WidgetControl::WidgetControl() {}

WidgetControl::WidgetControl(QWidget *parent) : QDialog(parent) {
    // Устанавливаем заголовок окна
    setWindowTitle("Введите значение");

    // Создаем и настраиваем виджеты
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *label = new QLabel("Введите текст:", this);
    QLineEdit *inputField = new QLineEdit(this);
    QPushButton *okButton = new QPushButton("Ок", this);
    QPushButton *cancelButton = new QPushButton("Отмена", this);

    // Добавляем виджеты в компоновку
    layout->addWidget(label);
    layout->addWidget(inputField);
    layout->addWidget(okButton);
    layout->addWidget(cancelButton);

    // Соединяем сигналы и слоты
    connect(okButton, &QPushButton::clicked, this, &QDialog::accept);
    connect(cancelButton, &QPushButton::clicked, this, &QDialog::reject);

    // Устанавливаем модальность диалога
    setModal(true);
}

QString WidgetControl::getInput()
{
    return findChild<QLineEdit *>()->text();
}
