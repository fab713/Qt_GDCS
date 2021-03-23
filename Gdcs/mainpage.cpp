#include "mainpage.h"
#include "ui_mainpage.h"

#include "commonpushbutton.h"
#include<QPainter>
#include<QDebug>
#include<QTimer>
#include"busbarpage.h"
#include "tabwidget.h"
#include "firstwaypage.h"

MainPage::MainPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainPage)
{
    ui->setupUi(this);
    //设置固定大小
    this->setFixedSize(1440,720);
    //this->setFixedSize(1000,620);
    //设置应用图片
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));
    //设置窗口标题
    this->setWindowTitle("GDCS主页面");
    //初始化母线
    initbusBar();
    //初始化第一路
    initFirstWay();
    //在主页面创建2，3，4，5，6，7，8路按钮
    //初始化第二路
    //initSecondWay();
    initOtherWay(2,"");
    //初始化第三路
    //initThirdWay();
    initOtherWay(3,"");
    //初始化第四路
    //initFourthWay();
    initOtherWay(4,"");
    //初始化第五路
    //initFiveWay();
    initOtherWay(5,"");
    //初始化第六路
    //initSixWay();
    initOtherWay(6,"");
    //初始化第七路
    //initSevenWay();
    initOtherWay(7,"");
    //初始化第八路
    //initEightWay();
    initOtherWay(8,"");

}
/**初始化母线
 * @brief MainPage::initbusBar
 */
void MainPage::initbusBar(){
    //在主页面创建母线按钮
    //CommonPushButton * startBtn = new CommonPushButton(":/res/busBarBkg3.png");
    CommonPushButton * startBtn = new CommonPushButton(":/res/MenuSceneStartButton.png");
    //startBtn->setGeometry(rect().x()+200, rect().y()+10,100, 30);
    //设置自定义样式
    //startBtn->setStyleSheet("border-image:url(/res/busBarBkg3.png)");
    startBtn->setParent(this);
    startBtn->move(this->width()-startBtn->width()*8,this->height()*0.2);
    busBarPage =new BusBarPage();
    TabWidget *tabWidget=new TabWidget();
    //监听母线页面的返回按钮的信号
    connect(busBarPage,&BusBarPage::busBarPageBack,this,[=](){
        QTimer::singleShot(500,this,[=](){
             busBarPage->hide();
             this->show();
        });
    });

    //监听tableWidget页面的返回按钮的信号
    connect(tabWidget,&TabWidget::tabWidgetBack,this,[=](){
        QTimer::singleShot(500,this,[=](){
             tabWidget->hide();
             this->show();
        });
    });

    //监听点击母线按钮事件，执行弹出母线主要页面
    connect(startBtn,&CommonPushButton::clicked,[=](){
        //延时跳转
        QTimer::singleShot(500,this,[=](){
            this->hide();
            //busBarPage->show();
            tabWidget->show();
        });
       });
}
/**初始化第一路
 * @brief MainPage::initFirstWay
 */
void MainPage::initFirstWay(){
    //在主页面创建第一路按钮
    CommonPushButton * firstWayBtn = new CommonPushButton(":/res/MenuSceneStartButton.png");
    //CommonPushButton * firstWayBtn = new CommonPushButton(":/res/swithBkg4.png");
    firstWayBtn->setParent(this);
    //firstWayBtn->move(this->width()-firstWayBtn->width()*25,this->height()*0.25);
    firstWayBtn->move(this->width()-firstWayBtn->width()*11,this->height()*0.4);
    firstWayPage=new FirstWayPage();
    //监听点击第一路按钮事件，执行弹出第一路页面
    connect(firstWayBtn,&CommonPushButton::clicked,[=](){
         qDebug() <<  "第一路按钮!";
         this->hide();
         firstWayPage->show();
    });

    //监听第一路页面的返回按钮的信号
    connect(firstWayPage,&FirstWayPage::firstWayPageBack,this,[=](){
        QTimer::singleShot(500,this,[=](){
             firstWayPage->hide();
             this->show();
        });
    });


}
/**初始化第二路
 * @brief iniSecondWay
 */
void MainPage::initSecondWay(){
    CommonPushButton * secondBtn = new CommonPushButton(":/res/MenuSceneStartButton.png");
    secondBtn->setParent(this);
    secondBtn->move(this->width()-secondBtn->width()*20,this->height()*0.25);
    //监听点击其它路按钮事件，执行弹出其他路页面
    OtherWayPage* otherWayPage=new OtherWayPage(2);
    connect(secondBtn,&CommonPushButton::clicked,[=](){
         qDebug() <<  "第二路按钮!";
         this->hide();
         otherWayPage->show();
    });
}
/**初始化第三路
 * @brief MainPage::iniThirdWay
 */
void  MainPage::initThirdWay(){
    CommonPushButton * thirdBtn = new CommonPushButton(":/res/MenuSceneStartButton.png");
    thirdBtn->setParent(this);
    thirdBtn->move(this->width()-thirdBtn->width()*9,this->height()*0.4);
     OtherWayPage* otherWayPage=new OtherWayPage(3);
    //监听点击其它路按钮事件，执行弹出其他路页面
    connect(thirdBtn,&CommonPushButton::clicked,[=](){
         qDebug() <<  "3路按钮!";
         this->hide();
         otherWayPage->show();
    });

}
//初始化第四路
void MainPage::initFourthWay(){
    CommonPushButton * fourthBtn = new CommonPushButton(":/res/MenuSceneStartButton.png");
    fourthBtn->setParent(this);
    fourthBtn->move(this->width()-fourthBtn->width()*8,this->height()*0.4);
    OtherWayPage* otherWayPage=new OtherWayPage(4);
    //监听点击其它路按钮事件，执行弹出其他路页面
    connect(fourthBtn,&CommonPushButton::clicked,[=](){
         qDebug() <<  "4路按钮!";
         this->hide();
         otherWayPage->show();
    });
}
//初始化第五路
void MainPage::initFiveWay(){
        CommonPushButton * fiveBtn = new CommonPushButton(":/res/MenuSceneStartButton.png");
        fiveBtn->setParent(this);
        fiveBtn->move(this->width()-fiveBtn->width()*7,this->height()*0.4);
         OtherWayPage* otherWayPage=new OtherWayPage(5);
        //监听点击其它路按钮事件，执行弹出其他路页面
        connect(fiveBtn,&CommonPushButton::clicked,[=](){
             qDebug() <<  "5路按钮!";
             this->hide();
             otherWayPage->show();
        });
}
//初始化第六路
void MainPage::initSixWay(){
        CommonPushButton * sixthBtn = new CommonPushButton(":/res/MenuSceneStartButton.png");
        sixthBtn->setParent(this);
        sixthBtn->move(this->width()-sixthBtn->width()*6,this->height()*0.4);
         OtherWayPage* otherWayPage=new OtherWayPage(6);
        //监听点击其它路按钮事件，执行弹出其他路页面
        connect(sixthBtn,&CommonPushButton::clicked,[=](){
             qDebug() <<  "6路按钮!";
             this->hide();
             otherWayPage->show();
        });
}
//初始化第七路
void MainPage::initSevenWay(){
        CommonPushButton * sevenBtn = new CommonPushButton(":/res/MenuSceneStartButton.png");
        sevenBtn->setParent(this);
        sevenBtn->move(this->width()-sevenBtn->width()*5,this->height()*0.4);
          OtherWayPage* otherWayPage=new OtherWayPage(7);
        //监听点击其它路按钮事件，执行弹出其他路页面
        connect(sevenBtn,&CommonPushButton::clicked,[=](){
             qDebug() <<  "7路按钮!";
             this->hide();
             otherWayPage->show();
        });
}
//初始化第八路
void MainPage::initEightWay(){
        CommonPushButton * eightBtn = new CommonPushButton(":/res/MenuSceneStartButton.png");
        eightBtn->setParent(this);
        eightBtn->move(this->width()-eightBtn->width()*4,this->height()*0.4);
         OtherWayPage* otherWayPage=new OtherWayPage(8);
        //监听点击其它路按钮事件，执行弹出其他路页面
        connect(eightBtn,&CommonPushButton::clicked,[=](){
             qDebug() <<  "8路按钮!";
             this->hide();
             otherWayPage->show();
        });
}
/**
 * @brief MainPage::initOtherWay
 * @param wayNum
 * @param type  根据类型不同加载不同的图片
 */
void MainPage::initOtherWay(int wayNum,QString type){
    QString bkg="";
    if(1==type){
        //高电平 开关打开
       bkg="/res/MenuSceneStartButton.png";
    }else{
      //低电平 开关合上
       bkg="/res/MenuSceneStartButton.png";
     }
    CommonPushButton * btn = new CommonPushButton(":/res/MenuSceneStartButton.png");
      //CommonPushButton * btn = new CommonPushButton(":/res/switchBkg3.png");
    btn->setParent(this);
    if(2==wayNum){
     btn->move(this->width()-btn->width()*10,this->height()*0.4);
      //btn->move(this->width()-btn->width()*23,this->height()*0.25);
    }
    if(3==wayNum){
      btn->move(this->width()-btn->width()*9,this->height()*0.4);
        //btn->move(this->width()-btn->width()*21,this->height()*0.25);
    }
    if(4==wayNum){
      btn->move(this->width()-btn->width()*8,this->height()*0.4);
        //btn->move(this->width()-btn->width()*19,this->height()*0.25);
    }
    if(5==wayNum){
      btn->move(this->width()-btn->width()*7,this->height()*0.4);
      //btn->move(this->width()-btn->width()*17,this->height()*0.25);
    }
    if(6==wayNum){
      btn->move(this->width()-btn->width()*6,this->height()*0.4);
       //btn->move(this->width()-btn->width()*15,this->height()*0.25);
    }
    if(7==wayNum){
      btn->move(this->width()-btn->width()*5,this->height()*0.4);
       //btn->move(this->width()-btn->width()*13,this->height()*0.25);
    }
    if(8==wayNum){
      btn->move(this->width()-btn->width()*4,this->height()*0.4);
       //btn->move(this->width()-btn->width()*11,this->height()*0.25);
    }
    OtherWayPage* otherWayPage=new OtherWayPage(wayNum);
    //监听点击其它路按钮事件，执行弹出其他路页面
    connect(btn,&CommonPushButton::clicked,[=](){
         QString str = QString("点击第 %1 路按钮").arg(wayNum);
         qDebug() << str;
         this->hide();
         otherWayPage->show();
    });
    //监听母线页面的返回按钮的信号
    connect(otherWayPage,&OtherWayPage::otherWayPageBack,this,[=](){
        QTimer::singleShot(500,this,[=](){
             otherWayPage->hide();
             this->show();
        });
    });

}
//重写主页面的PaintEvent事件
void MainPage::paintEvent(QPaintEvent *)
{
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

MainPage::~MainPage()
{
    delete ui;
}
