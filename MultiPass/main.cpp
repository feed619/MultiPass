

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
// #include <QWidget>
// #include <QHBoxLayout>
// #include <QVBoxLayout>
// #include <QLabel>
// #include <QPushButton>
// #include "tools/tabpushbutton.h"
// class MainWindow : public QWidget {
//     Q_OBJECT

// public:
//     MainWindow(QWidget *parent = nullptr) : QWidget(parent) {
//         // Создаем вертикальный layout для основного окна
//         QVBoxLayout *mainLayout = new QVBoxLayout(this);

//         // Создаем горизонтальный layout для QLabel и QPushButton
//         hboxLayout = new QHBoxLayout();

//         // Создаем QLabel и QPushButton
//         QLabel *label = new QLabel("This is a label", this);
//         TabPushButton *button = new TabPushButton("This is a button", this);

//         // Добавляем их в горизонтальный layout
//         hboxLayout->addWidget(label);
//         hboxLayout->addWidget(button);

//         // Создаем кнопку для скрытия/показа layout
//         TabPushButton *toggleButton = new TabPushButton("Hide Layout", this);
//         connect(toggleButton, &TabPushButton::clicked, this, &MainWindow::toggleLayoutVisibility);

//         // Добавляем горизонтальный layout и кнопку в основной layout
//         mainLayout->addLayout(hboxLayout);
//         mainLayout->addWidget(toggleButton);
//     }

// public slots:
//     void toggleLayoutVisibility() {
//         // Переключаем видимость всех виджетов в hboxLayout
//         bool visible = hboxLayout->itemAt(0)->widget()->isVisible(); // Проверяем текущее состояние видимости
//         for (int i = 0; i < hboxLayout->count(); ++i) {
//             QWidget *widget = hboxLayout->itemAt(i)->widget();
//             if (widget) {
//                 widget->setVisible(!visible);  // Переключаем видимость
//             }
//         }
//     }

// private:
//     QHBoxLayout *hboxLayout;
// };

// int main(int argc, char *argv[]) {
//     QApplication app(argc, argv);

//     MainWindow window;
//     window.show();

//     return app.exec();
// }

// #include "main.moc"



