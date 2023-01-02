#include "opengl.h"
#include "ui_opengl.h"
#include<QDebug>
#include<QFileDialog>



opengl::opengl(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::opengl)
{
    ui->setupUi(this);
    /*
     *  void drawLine();
    void drawTriangle();
    void drawCircle();
    void drawRect();
    void drawRoundRect();
    void drawArc();
    void move();
    void deletes();

    void white();
    void yellow();
    void red();
    void grey();
    void darkgrey();
    */
    connect(ui->Line,SIGNAL(clicked(bool)),this,SLOT(drawLine()));
    connect(ui->Triangle,SIGNAL(clicked(bool)),this,SLOT(drawTriangle()));
    connect(ui->Circle,SIGNAL(clicked(bool)),this,SLOT(drawCircle()));
    connect(ui->Rect,SIGNAL(clicked(bool)),this,SLOT(drawRect()));
    connect(ui->RoundRect,SIGNAL(clicked(bool)),this,SLOT(drawRoundRect()));
    connect(ui->Arc,SIGNAL(clicked(bool)),this,SLOT(drawArc()));
    connect(ui->Move,SIGNAL(clicked(bool)),this,SLOT(move()));
    connect(ui->Delete,SIGNAL(clicked(bool)),this,SLOT(deletes()));
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(white()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(yellow()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(red()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(grey()));
    connect(ui->pushButton_5,SIGNAL(clicked(bool)),this,SLOT(darkgrey()));

}

opengl::~opengl()
{
    delete ui;
}

void opengl::fileSaveActionSlot()
{
    qDebug() << "saveslot";
    //QMessageBox::warning(this,tr("提示"),tr("打开文件"),QMessageBox::Yes|QMessageBox::No);
    if (this->filename.isNull())
    {
        qDebug() << "if";
        saveas();
    }
    else
    {
        qDebug() << "else if";
        qDebug() << this->filename;
        const char* ch;
        QByteArray ba = this->filename.toLatin1();
        ch = ba.data();
        ui->widget->write_out(ch);
    }
}


void opengl::fileSaveAsActionSlot()
{
    qDebug() << "save as slot";
    saveas();
}

void opengl::fileOpenActionSlot()
{
    load();
}

void opengl::save()
{
    qDebug() << this->filename;
    const char* ch;
    QByteArray ba = this->filename.toLatin1();
    ch = ba.data();
    ui->widget->write_out(ch);
}

void opengl::saveas()
{
    qDebug() << "enter save as";
    QString file_name = QFileDialog::getSaveFileName(this,
        tr("Save File"),
        "",
        "",
        0);
    this->filename = file_name;
    if (!file_name.isNull())
    {
        //fileName是文件名
        const char* ch;
        QByteArray ba = file_name.toLatin1();
        ch = ba.data();
        ui->widget->write_out(ch);
    }
    else {
        //点的是取消
    }
}

void opengl::load()
{
    QString file_name = QFileDialog::getOpenFileName(this,
        tr("Open File"),
        "",
        "",
        0);
    this->filename = file_name;
    qDebug() << this->filename;
    if (!this->filename.isNull())
    {
        //fileName是文件名
        const char* ch;
        QByteArray ba = this->filename.toLatin1();
        ch = ba.data();
         ui->widget->read_image(ch);
    }
    else {
        //点的是取消
    }
}

void opengl::drawLine()
{
    //qDebug() << "draw begin";
     ui->widget->control = 1;
     ui->widget->type = 1;
}

void opengl::drawTriangle()
{
     ui->widget->control = 1;
     ui->widget->type = 2;
}

void opengl::drawCircle()
{
     ui->widget->control = 1;
     ui->widget->type = 3;
}

void opengl::drawRect()
{
     ui->widget->control = 1;
     ui->widget->type = 4;
}

void opengl::drawRoundRect()
{
     ui->widget->control = 1;
     ui->widget->type = 5;
}

void opengl::drawArc()
{
     ui->widget->control = 1;
     ui->widget->type = 6;
}

void opengl::move()
{
     ui->widget->control = 2;
}

void opengl::deletes()
{
     ui->widget->control = 3;
}

void opengl::white()
{
     ui->widget->color = 0;
}

void opengl::yellow()
{
     ui->widget->color = 1;
}

void opengl::red()
{
     ui->widget->color = 2;
}

void opengl::grey()
{
     ui->widget->color = 3;
}

void opengl::darkgrey()
{
     ui->widget->color = 4;
}


