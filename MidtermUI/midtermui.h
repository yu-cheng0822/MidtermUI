#ifndef MIDTERMUI_H
#define MIDTERMUI_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MidtermUI;
}
QT_END_NAMESPACE

class MidtermUI : public QWidget
{
    Q_OBJECT

public:
    MidtermUI(QWidget *parent = nullptr);
    ~MidtermUI();

private:
    Ui::MidtermUI *ui;
};
#endif // MIDTERMUI_H
