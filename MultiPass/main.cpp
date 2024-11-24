

#include "package/multipass.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "MultiPass_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    // QMainWindow *window;
    MultiPass w;
    // w.setupUi(w);
    w.window->show();
    return a.exec();
}




// #include <QApplication>
// #include <QDialog>
// #include <QVBoxLayout>
// #include <QLineEdit>
// #include <QPushButton>
// #include <QLabel>

// class InputDialog : public QDialog {


// public:
//     InputDialog(QWidget *parent = nullptr) : QDialog(parent) {
//         // Устанавливаем заголовок окна
//         setWindowTitle("Введите значение");

//         // Создаем и настраиваем виджеты
//         QVBoxLayout *layout = new QVBoxLayout(this);
//         QLabel *label = new QLabel("Введите текст:", this);
//         QLineEdit *inputField = new QLineEdit(this);
//         QPushButton *okButton = new QPushButton("Ок", this);
//         QPushButton *cancelButton = new QPushButton("Отмена", this);

//         // Добавляем виджеты в компоновку
//         layout->addWidget(label);
//         layout->addWidget(inputField);
//         layout->addWidget(okButton);
//         layout->addWidget(cancelButton);

//         // Соединяем сигналы и слоты
//         connect(okButton, &QPushButton::clicked, this, &QDialog::accept);
//         connect(cancelButton, &QPushButton::clicked, this, &QDialog::reject);

//         // Устанавливаем модальность диалога
//         setModal(true);
//     }

//     QString getInput() const {
//         // Получаем текст, введенный пользователем
//         return findChild<QLineEdit *>()->text();
//     }
// };

// int main(int argc, char *argv[]) {
//     QApplication app(argc, argv);

//     // Создаем и отображаем модальный диалог
//     InputDialog dialog;
//     if (dialog.exec() == QDialog::Accepted) {
//         QString userInput = dialog.getInput();
//         // Обрабатываем введенные данные
//         qDebug() << "Пользователь ввел:" << userInput;
//     }

//     return app.exec();
// }
