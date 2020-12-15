#include "inform.h"
#include "ui_inform.h"
#include<QPixmap>
inform::inform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inform)
{
    this->setWindowFlags (this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
        ui->setupUi(this);
        this->setWindowTitle("Информация");


}

inform::~inform()
{
    delete ui;
}

void inform::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
        emit firstWindow();
}

// QPixmap pix(":/img/img/Vigenère_square.svg.png");
// int w =ui->label->width();
//  int h =ui->label->height();
//  ui->label->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
