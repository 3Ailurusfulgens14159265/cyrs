#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)

    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    this->setWindowTitle("Меню");

     v=new vij(this);
      connect(v, &vij::firstWindow, this, &MainWindow::show);
      c=new cez(this);
      connect(c, &cez::firstWindow, this, &MainWindow::show);
      z=new az(this);
      connect(z, &az::firstWindow, this, &MainWindow::show);
      i=new inform(this);
      connect(i, &inform::firstWindow, this, &MainWindow::show);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{
    hide();
   v->show();
}


void MainWindow::on_pushButton_clicked()
{
    hide();
   c->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    hide();
   z->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    hide();
   i->show();
}
