#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->btn0,&QPushButton::clicked,this,[this](){
        QString calc = ui->lineEdit->text();
        calc = calc + "0";
        ui->lineEdit->setText(calc);
    });

    connect(ui->btn1,&QPushButton::clicked,this,[this](){
        QString calc = ui->lineEdit->text();
        calc = calc + "1";
        ui->lineEdit->setText(calc);
    });

    connect(ui->btn2,&QPushButton::clicked,this,[this](){
        QString calc = ui->lineEdit->text();
        calc = calc + "2";
        ui->lineEdit->setText(calc);
    });

    connect(ui->btn3,&QPushButton::clicked,this,[this](){
        QString calc = ui->lineEdit->text();
        calc = calc + "3";
        ui->lineEdit->setText(calc);
    });

    connect(ui->btn4,&QPushButton::clicked,this,[this](){
        QString calc = ui->lineEdit->text();
        calc = calc + "4";
        ui->lineEdit->setText(calc);
    });

    connect(ui->btn5,&QPushButton::clicked,this,[this](){
        QString calc = ui->lineEdit->text();
        calc = calc + "5";
        ui->lineEdit->setText(calc);
    });

    connect(ui->btn6,&QPushButton::clicked,this,[this](){
        QString calc = ui->lineEdit->text();
        calc = calc + "6";
        ui->lineEdit->setText(calc);
    });

    connect(ui->btn7,&QPushButton::clicked,this,[this](){
        QString calc = ui->lineEdit->text();
        calc = calc + "7";
        ui->lineEdit->setText(calc);
    });

    connect(ui->btn8,&QPushButton::clicked,this,[this](){
        QString calc = ui->lineEdit->text();
        calc = calc + "8";
        ui->lineEdit->setText(calc);
    });

    connect(ui->btn9,&QPushButton::clicked,this,[this](){
        QString calc = ui->lineEdit->text();
        calc = calc + "9";
        ui->lineEdit->setText(calc);
    });

    connect(ui->btnDivide,&QPushButton::clicked,this,[this](){
        QString calc = ui->lineEdit->text();
        calc = calc + "/";
        ui->lineEdit->setText(calc);
    });

    connect(ui->btnTimes,&QPushButton::clicked,this,[this](){
        QString calc = ui->lineEdit->text();
        calc = calc + "*";
        ui->lineEdit->setText(calc);
    });

    connect(ui->btnMinus,&QPushButton::clicked,this,[this](){
        QString calc = ui->lineEdit->text();
        calc = calc + "-";
        ui->lineEdit->setText(calc);
    });

    connect(ui->btnPlus,&QPushButton::clicked,this,[this](){
        QString calc = ui->lineEdit->text();
        calc = calc + "+";
        ui->lineEdit->setText(calc);
    });

    connect(ui->btnModulo,&QPushButton::clicked,this,[this](){
        QString calc = ui->lineEdit->text();
        calc = calc + "%";
        ui->lineEdit->setText(calc);
    });

    connect(ui->btnSquareRoot,&QPushButton::clicked,this,[this](){
        QString calc = ui->lineEdit->text();
        calc = calc + "sqrt()";
        ui->lineEdit->setText(calc);
        ui->lineEdit->setCursorPosition(calc.length() - 2);
    });

    connect(ui->btnCE,&QPushButton::clicked,this,[this](){
        ui->lineEdit->setText("");
    });

    connect(ui->btnEquals,SIGNAL(clicked(bool)),this,SLOT(evaluateExpression()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::evaluateExpression()
{

    QString calc = ui->lineEdit->text();
    ui->lineEdit->setText(QString::number(this->engine.evaluate(calc).toNumber()));
}
