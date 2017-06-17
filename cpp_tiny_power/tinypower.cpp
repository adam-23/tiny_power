#include "tinypower.h"
#include "ui_tinypower.h"

tinypower::tinypower(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tinypower)
{
    ui->setupUi(this);
    setWindowTitle("tinypower");
}

tinypower::~tinypower()
{
    delete ui;
}

void tinypower::on_restart_clicked()
{
    system("/bin/bash -c 'shutdown -r now'");
}

void tinypower::on_power_clicked()
{
    system("/bin/bash -c 'shutdown -h now'");
}
