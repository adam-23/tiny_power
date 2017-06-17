#ifndef TINYPOWER_H
#define TINYPOWER_H

#include <QMainWindow>

namespace Ui {
class tinypower;
}

class tinypower : public QMainWindow
{
    Q_OBJECT

public:
    explicit tinypower(QWidget *parent = 0);
    ~tinypower();

private slots:
    void on_restart_clicked();

    void on_power_clicked();

private:
    Ui::tinypower *ui;
};

#endif // TINYPOWER_H
