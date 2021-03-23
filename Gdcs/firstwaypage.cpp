#include "firstwaypage.h"
#include "ui_firstwaypage.h"
#include<QPainter>
#include<QDebug>
#include"commonpushbutton.h"
#include"QTimer"
FirstWayPage::FirstWayPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FirstWayPage)
{
    ui->setupUi(this);
    //设置固定大小
    //this->setFixedSize(1000,620);
    //设置应用图片
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));
    //设置窗口标题
    this->setWindowTitle("第一路主页面");
    //创建返回按钮
    createBackBt();
    //加载第一路数据
    loadData();
}
/**创建返回按钮
 * @brief FirstWayPage::createBackBt
 */
void FirstWayPage::createBackBt(){
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
            emit this->firstWayPageBack();
           });
   });
}
/**加载第一路数据
 * @brief FirstWayPage::initData
 */
void FirstWayPage::loadData(){
    //第一
    ui->deviceDataLabel->setText("kf5678");
    ui->lineNameDataLabel->setText("第一路");
    //第二
    ui->axDataLabel->setText("0.1A");
    ui->bxDataLabel->setText("0.2A");
    ui->cxDataLabel->setText("0.3A");
    //第三
    ui->switchDataLabel->setText("kf5678");
    //第四
    ui->taxDataLabel->setText("0.1A");
    ui->tbxDataLabel->setText("0.2A");
    ui->tcxDataLabel->setText("0.3A");
    //第五
    ui->currenthDataLabel->setText("kf5678");
    ui->xHarmonicDataLabel->setText("88");
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

FirstWayPage::~FirstWayPage()
{
    delete ui;
}

/**重写PaintEvent事件
 * @brief FirstWayPage::paintEvent
 */
void FirstWayPage::paintEvent(QPaintEvent *){

    //创建画家，指定绘图设备
    QPainter painter(this);
    //创建QPixmap对象
    QPixmap pix;
    //加载图片
    pix.load(":/res/background.png");
    //绘制背景图
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
    //加载标题
    //pix.load(":/res/Title.png");
    //缩放图片
    pix = pix.scaled(pix.width()*0.5,pix.height()*0.5);
    //绘制标题
    painter.drawPixmap( 10,30,pix.width(),pix.height(),pix);

}
