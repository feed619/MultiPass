#ifndef MULTIPASS_H
#define MULTIPASS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MultiPass;
}
QT_END_NAMESPACE

class MultiPass : public QMainWindow
{
    Q_OBJECT

public:
    MultiPass(QWidget *parent = nullptr);
    ~MultiPass();

private:
    Ui::MultiPass *ui;
};
#endif // MULTIPASS_H
