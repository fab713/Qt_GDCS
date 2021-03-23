#include "itembusbarwidget.h"
#include "ui_itembusbarwidget.h"

ItemBusBarWidget::ItemBusBarWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ItemBusBarWidget)
{
    ui->setupUi(this);
}

ItemBusBarWidget::~ItemBusBarWidget()
{
    delete ui;
}
