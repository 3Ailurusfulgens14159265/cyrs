#include "vij.h"
#include "ui_vij.h"
#include"vijen.h"
#include"QMessageBox"
vij::vij(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vij)
{this->setWindowFlags (this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    ui->setupUi(this);
    this->setWindowTitle("Шифр Виженера");
}

vij::~vij()
{
    delete ui;
}
bool find_first_not_of(QString in_wich_is_searched, QString what_is_searched){
    for (int i=0; i<what_is_searched.length(); i++) if(!(in_wich_is_searched.contains(what_is_searched[i]))) return true;
    return false;
   }
void vij::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
        emit firstWindow();

}

void vij::on_pushButton_2_clicked()
{
     QString  text1;
    QString text=ui->textEdit->toPlainText();
    QString key=ui->lineEdit->text();
  if(key==0){
      QMessageBox::warning(this,"ошибка ввода","введите ключ");
      return;
}
    QString a = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ ";
    vijen k(key);
      bool f= find_first_not_of( a,text);
   if(f){
       QMessageBox::warning(this,"ошибка ввода","неправильно введён текст");

   }
     bool g=ui->radioButton->isChecked();
     bool g1=ui->radioButton_2->isChecked();
   if(g==1){
     text1= k.encryption(text);
   }else if( g1==1){
        text1= k. decryption(text);
   }else {
       QMessageBox::warning(this,"ошибка ввода","сделайте выбор");
       return;
   }
    ui->textEdit_2->setText(text1);

}

void vij::on_pushButton_3_clicked()
{

}
