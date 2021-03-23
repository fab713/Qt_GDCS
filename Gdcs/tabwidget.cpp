#include "tabwidget.h"
#include "ui_tabwidget.h"
#include <QDebug>
#include <QHBoxLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QRadioButton>
#include  <QPixmap>
#include  <QTimer>
#include "commonpushbutton.h"

TabWidget::TabWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TabWidget)
{
    ui->setupUi(this);
    //设置应用图片
   this->setWindowIcon(QPixmap(":/res/Coin0001.png"));
    //设置选中第一个标签
    ui->tabWidget->setCurrentIndex(0);
    //设置选项卡的形状 Rounded
   ui->tabWidget->setTabShape(QTabWidget::Triangular);

   //设置lable的标题
   ui->tabWidget->setTabText(0,"总数据");
   ui->tabWidget->setTabText(1,"A相电压数据");
   ui->tabWidget->setTabText(2,"B相电压数据");
   ui->tabWidget->setTabText(3,"C相电压数据");
  //初始化总数据table
   initTotalTable();
   //初始化a数据table
   initaVoltageTable();
    //初始化b数据table
   initbVoltageTable();
   //初始化c数据table
   initcVoltageTable();



}

//创建返回按钮
void TabWidget::createBackBt(){
    //创建返回按钮
    CommonPushButton *backBtn=new CommonPushButton(":/res/BackButton.png", ":/res/BackButtonSelected.png");
    backBtn->setParent(this);
    backBtn->move(this->width()-backBtn->width(),this->height()-backBtn->height());
    //返回按钮功能实现
   connect(backBtn,&CommonPushButton::clicked,this,[=](){
       //告诉主页面 我返回了，主页面监听otherWayPage的返回按钮
                //延时返回
           QTimer::singleShot(500,this,[=](){
               //触发自定义信号，关闭自身，该信号写到 signals下做声明
            emit this->tabWidgetBack();
           });
   });

}
//初始化总数total
void TabWidget::initTotalTable(){
    ui->totalTable->setWindowIcon(QIcon(":/res/Coin0001.png"));
   //绿色Table背景色
    ui->totalTable->setStyleSheet("QWidget#totalTable{"
                               "background-color:#00eeee;"
                               "border:1px solid #eeeeee;}");

   ui->axTotalVoltageDataLabel->setText("50KV");
   ui->bxTotalVoltageDataLabel->setText("50KV");
   ui->cxTotalVoltageDataLabel->setText("50KV");

   ui->taxVoltageDataLabel->setText("40KV");
   ui->tbxVoltageDataLabel->setText("40KV");
   ui->tcxVoltageDataLabel->setText("40KV");


   ui->xTotalHarmonicDataLabel->setText("40KV");
   ui->voltagethDataLabel->setText("kfds");


   QListWidgetItem *item2=new QListWidgetItem("2次谐波分量:44");
   QListWidgetItem *item3=new QListWidgetItem("3次谐波分量:44");
   QListWidgetItem *item4=new QListWidgetItem("4次谐波分量:44");
   QListWidgetItem *item5=new QListWidgetItem("5次谐波分量:44");
   QListWidgetItem *item6=new QListWidgetItem("6次谐波分量:44");
   QListWidgetItem *item7=new QListWidgetItem("7次谐波分量:44");
   QListWidgetItem *item8=new QListWidgetItem("8次谐波分量:44");
   QListWidgetItem *item9=new QListWidgetItem("9次谐波分量:44");
   QListWidgetItem *item10=new QListWidgetItem("10次谐波分量:44");
   QListWidgetItem *item11=new QListWidgetItem("11次谐波分量:44");
   QListWidgetItem *item12=new QListWidgetItem("12次谐波分量:44");
   QListWidgetItem *item13=new QListWidgetItem("13次谐波分量:44");
   QListWidgetItem *item14=new QListWidgetItem("14次谐波分量:44");
   QListWidgetItem *item15=new QListWidgetItem("15次谐波分量:44");
   QListWidgetItem *item16=new QListWidgetItem("16次谐波分量:44");
   QListWidgetItem *item17=new QListWidgetItem("17次谐波分量:44");
   QListWidgetItem *item18=new QListWidgetItem("18次谐波分量:44");
   QListWidgetItem *item19=new QListWidgetItem("19次谐波分量:44");
   QListWidgetItem *item20=new QListWidgetItem("20次谐波分量:44");
   QListWidgetItem *item21=new QListWidgetItem("21次谐波分量:44");
   QListWidgetItem *item22=new QListWidgetItem("22次谐波分量:44");
   QListWidgetItem *item23=new QListWidgetItem("23次谐波分量:44");
   QListWidgetItem *item24=new QListWidgetItem("24次谐波分量:44");
   QListWidgetItem *item25=new QListWidgetItem("25次谐波分量:44");
   QListWidgetItem *item26=new QListWidgetItem("26次谐波分量:44");
   QListWidgetItem *item27=new QListWidgetItem("27次谐波分量:44");
   QListWidgetItem *item28=new QListWidgetItem("28次谐波分量:44");
   QListWidgetItem *item29=new QListWidgetItem("29次谐波分量:44");
   QListWidgetItem *item30=new QListWidgetItem("30次谐波分量:44");
   QListWidgetItem *item31=new QListWidgetItem("31次谐波分量:44");

   ui->harmonicListWidget->addItem(item2);
   ui->harmonicListWidget->addItem(item3);
   ui->harmonicListWidget->addItem(item4);
   ui->harmonicListWidget->addItem(item5);
   ui->harmonicListWidget->addItem(item6);
   ui->harmonicListWidget->addItem(item7);
   ui->harmonicListWidget->addItem(item8);
   ui->harmonicListWidget->addItem(item9);
   ui->harmonicListWidget->addItem(item10);
   ui->harmonicListWidget->addItem(item11);
   ui->harmonicListWidget->addItem(item12);
    ui->harmonicListWidget->addItem(item13);
     ui->harmonicListWidget->addItem(item14);
     ui->harmonicListWidget->addItem(item15);
     ui->harmonicListWidget->addItem(item16);
     ui->harmonicListWidget->addItem(item17);
     ui->harmonicListWidget->addItem(item18);
     ui->harmonicListWidget->addItem(item19);
     ui->harmonicListWidget->addItem(item20);
     ui->harmonicListWidget->addItem(item21);
     ui->harmonicListWidget->addItem(item22);
     ui->harmonicListWidget->addItem(item23);
     ui->harmonicListWidget->addItem(item24);
     ui->harmonicListWidget->addItem(item25);
     ui->harmonicListWidget->addItem(item26);
     ui->harmonicListWidget->addItem(item27);
     ui->harmonicListWidget->addItem(item28);
     ui->harmonicListWidget->addItem(item29);
     ui->harmonicListWidget->addItem(item30);
     ui->harmonicListWidget->addItem(item31);


}
//初始化总数total
void TabWidget::initaVoltageTable(){
    //绿色Table背景色
     ui->atab->setStyleSheet("QWidget#atab{"
                                "background-color:#00ffff;"
                                "border:1px solid #eeeeee;}");
    ui->aAxTotalVoltageDataLabel->setText("20KV");
    ui->aBxTotalVoltageDataLabel->setText("20KV");
    ui->aCxTotalVoltageDataLabel->setText("20KV");

    ui->aTaxVoltageDataLabel->setText("30KV");
    ui->aTbxVoltageDataLabel->setText("30KV");
    ui->aTcxVoltageDataLabel->setText("30KV");

    ui->aXTotalHarmonicDataLabel->setText("40kv");
    ui->aVoltagethDataLabel->setText("kfds");

    QListWidgetItem *item2=new QListWidgetItem("2次谐波分量:44");
    QListWidgetItem *item3=new QListWidgetItem("3次谐波分量:44");
    QListWidgetItem *item4=new QListWidgetItem("4次谐波分量:44");
    QListWidgetItem *item5=new QListWidgetItem("5次谐波分量:44");
    QListWidgetItem *item6=new QListWidgetItem("6次谐波分量:44");
    QListWidgetItem *item7=new QListWidgetItem("7次谐波分量:44");
    QListWidgetItem *item8=new QListWidgetItem("8次谐波分量:44");
    QListWidgetItem *item9=new QListWidgetItem("9次谐波分量:44");
    QListWidgetItem *item10=new QListWidgetItem("10次谐波分量:44");
    QListWidgetItem *item11=new QListWidgetItem("11次谐波分量:44");
    QListWidgetItem *item12=new QListWidgetItem("12次谐波分量:44");
    QListWidgetItem *item13=new QListWidgetItem("13次谐波分量:44");
    QListWidgetItem *item14=new QListWidgetItem("14次谐波分量:44");
    QListWidgetItem *item15=new QListWidgetItem("15次谐波分量:44");
    QListWidgetItem *item16=new QListWidgetItem("16次谐波分量:44");
    QListWidgetItem *item17=new QListWidgetItem("17次谐波分量:44");
    QListWidgetItem *item18=new QListWidgetItem("18次谐波分量:44");
    QListWidgetItem *item19=new QListWidgetItem("19次谐波分量:44");
    QListWidgetItem *item20=new QListWidgetItem("20次谐波分量:44");
    QListWidgetItem *item21=new QListWidgetItem("21次谐波分量:44");
    QListWidgetItem *item22=new QListWidgetItem("22次谐波分量:44");
    QListWidgetItem *item23=new QListWidgetItem("23次谐波分量:44");
    QListWidgetItem *item24=new QListWidgetItem("24次谐波分量:44");
    QListWidgetItem *item25=new QListWidgetItem("25次谐波分量:44");
    QListWidgetItem *item26=new QListWidgetItem("26次谐波分量:44");
    QListWidgetItem *item27=new QListWidgetItem("27次谐波分量:44");
    QListWidgetItem *item28=new QListWidgetItem("28次谐波分量:44");
    QListWidgetItem *item29=new QListWidgetItem("29次谐波分量:44");
    QListWidgetItem *item30=new QListWidgetItem("30次谐波分量:44");
    QListWidgetItem *item31=new QListWidgetItem("31次谐波分量:44");

    ui->aHarmonicListWidget->addItem(item2);
        ui->aHarmonicListWidget->addItem(item3);
        ui->aHarmonicListWidget->addItem(item4);
        ui->aHarmonicListWidget->addItem(item5);
        ui->aHarmonicListWidget->addItem(item6);
        ui->aHarmonicListWidget->addItem(item7);
        ui->aHarmonicListWidget->addItem(item8);
        ui->aHarmonicListWidget->addItem(item9);
        ui->aHarmonicListWidget->addItem(item10);
        ui->aHarmonicListWidget->addItem(item11);
        ui->aHarmonicListWidget->addItem(item12);
        ui->aHarmonicListWidget->addItem(item13);
        ui->aHarmonicListWidget->addItem(item14);
        ui->aHarmonicListWidget->addItem(item15);
        ui->aHarmonicListWidget->addItem(item16);
        ui->aHarmonicListWidget->addItem(item17);
        ui->aHarmonicListWidget->addItem(item18);
        ui->aHarmonicListWidget->addItem(item19);
        ui->aHarmonicListWidget->addItem(item20);
        ui->aHarmonicListWidget->addItem(item21);
        ui->aHarmonicListWidget->addItem(item22);
        ui->aHarmonicListWidget->addItem(item23);
        ui->aHarmonicListWidget->addItem(item24);
        ui->aHarmonicListWidget->addItem(item25);
        ui->aHarmonicListWidget->addItem(item26);
        ui->aHarmonicListWidget->addItem(item27);
        ui->aHarmonicListWidget->addItem(item28);
        ui->aHarmonicListWidget->addItem(item29);
        ui->aHarmonicListWidget->addItem(item30);
        ui->aHarmonicListWidget->addItem(item31);




}
//初始化总数total
void TabWidget::initbVoltageTable(){
    //绿色Table背景色
     ui->btab->setStyleSheet("QWidget#btab{"
                                "background-color:#00ffff;"
                                "border:1px solid #eeeeee;}");
}
//初始化总数total
void TabWidget::initcVoltageTable(){
    //绿色Table背景色
     ui->ctab->setStyleSheet("QWidget#ctab{"
                                "background-color:#00ffff;"
                                "border:1px solid #eeeeee;}");
}


TabWidget::~TabWidget()
{
    delete ui;
}
