#include "busbarpage.h"
#include "ui_busbarpage.h"
#include "commonpushbutton.h"
#include<QDebug>
#include<QPainter>
#include<QListWidget>
#include<QTimer>
#include"itembusbarwidget.h"


BusBarPage::BusBarPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BusBarPage)
{
    ui->setupUi(this);
    //设置固定大小
    this->setFixedSize(1000,620);
    //设置应用图片
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));
    //设置窗口标题
    this->setWindowTitle("母线主页面");

    //创建返回按钮
    CommonPushButton *backBtn=new CommonPushButton(":/res/BackButton.png" , ":/res/BackButtonSelected.png");
    backBtn->setParent(this);
    backBtn->move(this->width()-backBtn->width(),this->height()-backBtn->height());

     //返回按钮功能实现
    connect(backBtn,&CommonPushButton::clicked,this,[=](){
        //告诉主页面 我返回了，主页面监听BusBarPage的返回按钮
                 //延时返回
            QTimer::singleShot(500,this,[=](){
                //触发自定义信号，关闭自身，该信号写到 signals下做声明
             emit this->busBarPageBack();
            });
    });



//    QListWidgetItem *pItem = new QListWidgetItem(this);
//    pItem->setText("Item5");
//    this->addItem(pItem);

   //创建母线页面QListWidget
//      ui->listBusBarResultWidget->setFixedWidth(1000);
//      ui->listBusBarResultWidget->setFixedHeight(620);
//   for(int index=0;index<50;++index){
//      QListWidgetItem* pItem=new QListWidgetItem(ui->listBusBarResultWidget);
//      ItemBusBarWidget* pWidget=new ItemBusBarWidget(this);
//      if(pItem && pWidget){
//        pItem->setSizeHint(pWidget->size());
//        ui->listBusBarResultWidget->addItem(pItem);
//        ui->listBusBarResultWidget->setItemWidget(pItem,pWidget);
//      }
//   }

//     QListWidgetItem *item0=new QListWidgetItem("设备:kf5678");
//     QListWidgetItem *item1=new QListWidgetItem("总汇:kf5678");
//     QListWidgetItem *item2=new QListWidgetItem("A相电流:kf5678");
//     QListWidgetItem *item3=new QListWidgetItem("B相电流:kf5678");
//     QListWidgetItem *item4=new QListWidgetItem("C相电流:kf5678");
//     ui->firstListWidget->addItem(item0);
//     ui->firstListWidget->addItem(item1);
//     ui->firstListWidget->addItem(item2);
//     ui->firstListWidget->addItem(item3);
//     ui->firstListWidget->addItem(item4);

//     QListWidgetItem *item5=new QListWidgetItem("开关型号:kf5678");
//     QListWidgetItem *item6=new QListWidgetItem("相电流值:kf5678");
//     QListWidgetItem *item7=new QListWidgetItem("同A相:kf5678");
//     QListWidgetItem *item8=new QListWidgetItem("同B相:kf5678");
//     QListWidgetItem *item9=new QListWidgetItem("同C相:kf5678");
//     ui->secondlistWidget->addItem(item5);
//     ui->secondlistWidget->addItem(item6);
//     ui->secondlistWidget->addItem(item7);
//     ui->secondlistWidget->addItem(item8);
//     ui->secondlistWidget->addItem(item9);



//     QListWidgetItem *item10=new QListWidgetItem("电流互感器型号:kf5678");
//     QListWidgetItem *item11=new QListWidgetItem(" 相谐波总量:kf5678");
//     ui->thirdListWidget->addItem(item10);
//     ui->thirdListWidget->addItem(item11);

//     QListWidgetItem *item12=new QListWidgetItem("电流互感器变比:");
//     QListWidgetItem *item13=new QListWidgetItem("2次谐波分量:44");
//     QListWidgetItem *item14=new QListWidgetItem("3次谐波分量:44");
//     ui->listBusBarResultWidget->addItem(item12);
//     ui->listBusBarResultWidget->addItem(item13);
//     ui->listBusBarResultWidget->addItem(item14);

    initTotalData();






}

//初始化母线主数据
void BusBarPage::initTotalData(){
   //第一
   ui->deviceDatalabel->setText("kf5678");
   ui->lineDatalabel->setText("第一路");
   //第二
   ui->aDatalabel->setText("0.1A");
   ui->bDatalabel->setText("0.2A");
   ui->cDatalabel->setText("0.3A");
   //第三
   ui->switchDatalabel->setText("kf5678");
   //第四
   ui->axDatalabel->setText("0.1A");
   ui->bxDatalabel->setText("0.2A");
   ui->cxDatalabel->setText("0.3A");
   //第五
   ui->trDatalabel->setText("kf5678");
   ui->xharmonicDatalabel->setText("88");
   //第七路
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

   ui->harmoniclistWidget->addItem(item2);
   ui->harmoniclistWidget->addItem(item3);
   ui->harmoniclistWidget->addItem(item4);
   ui->harmoniclistWidget->addItem(item5);
   ui->harmoniclistWidget->addItem(item6);
   ui->harmoniclistWidget->addItem(item7);
   ui->harmoniclistWidget->addItem(item8);
   ui->harmoniclistWidget->addItem(item9);
   ui->harmoniclistWidget->addItem(item10);
   ui->harmoniclistWidget->addItem(item11);
   ui->harmoniclistWidget->addItem(item12);
   ui->harmoniclistWidget->addItem(item13);
   ui->harmoniclistWidget->addItem(item14);
   ui->harmoniclistWidget->addItem(item15);
   ui->harmoniclistWidget->addItem(item16);
   ui->harmoniclistWidget->addItem(item17);
   ui->harmoniclistWidget->addItem(item18);
   ui->harmoniclistWidget->addItem(item19);
   ui->harmoniclistWidget->addItem(item20);
   ui->harmoniclistWidget->addItem(item21);
   ui->harmoniclistWidget->addItem(item22);
   ui->harmoniclistWidget->addItem(item23);
   ui->harmoniclistWidget->addItem(item24);
   ui->harmoniclistWidget->addItem(item25);
   ui->harmoniclistWidget->addItem(item26);
   ui->harmoniclistWidget->addItem(item27);
   ui->harmoniclistWidget->addItem(item28);
   ui->harmoniclistWidget->addItem(item29);
   ui->harmoniclistWidget->addItem(item30);
   ui->harmoniclistWidget->addItem(item31);
}


BusBarPage::~BusBarPage()
{
    delete ui;
}

/**重写PaintEvent事件
 * @brief FirstWayPage::paintEvent
 */
void BusBarPage::paintEvent(QPaintEvent *){

    //创建画家，指定绘图设备
//    QPainter painter(this);
//    //创建QPixmap对象
//    QPixmap pix;
//    //加载图片
//    //pix.load(":/res/PlayLevelSceneBg.png");
//    //绘制背景图
//    painter.drawPixmap(0,0,this->width(),this->height(),pix);
//    //加载标题
//    pix.load(":/res/Title.png");
//    //缩放图片
//    pix = pix.scaled(pix.width()*0.5,pix.height()*0.5);
//    //绘制标题
//    painter.drawPixmap( 10,30,pix.width(),pix.height(),pix);

}
