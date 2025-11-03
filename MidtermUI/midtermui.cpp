#include "midtermui.h"
#include "ui_midtermui.h"

MidtermUI::MidtermUI(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MidtermUI)
{
    ui->setupUi(this);
}

MidtermUI::~MidtermUI()
{
    delete ui;
}
