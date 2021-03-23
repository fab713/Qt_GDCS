#ifndef ITEMBUSBARWIDGET_H
#define ITEMBUSBARWIDGET_H

#include <QWidget>

namespace Ui {
class ItemBusBarWidget;
}

class ItemBusBarWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ItemBusBarWidget(QWidget *parent = nullptr);
    ~ItemBusBarWidget();

private:
    Ui::ItemBusBarWidget *ui;
};

#endif // ITEMBUSBARWIDGET_H
