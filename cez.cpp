#include "cez.h"
#include "ui_cez.h"
#include"QMessageBox"
#include"cezar.h"
cez::cez(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cez)
{this->setWindowFlags (this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    ui->setupUi(this);
    this->setWindowTitle("Шифр Цезаря");
}

cez::~cez()
{
    delete ui;
}
bool find_first_not_of1(QString in_wich_is_searched, QString what_is_searched){
    for (int i=0; i<what_is_searched.length(); i++) if(!(in_wich_is_searched.contains(what_is_searched[i]))) return true;
    return false;
   }
void cez::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
        emit firstWindow();
}

void cez::on_pushButton_2_clicked()
{
    QString  text1;
   QString text=ui->textEdit->toPlainText();
   int key=ui->lineEdit_4->text().toInt();



 if(!key){
     QMessageBox::warning(this,"ошибка ввода","неправильно введён ключ");

}
   QString a = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ ";
   cezar c(key);
     bool f= find_first_not_of1( a,text);
  if(f){
      QMessageBox::warning(this,"ошибка ввода","неправильно введён текст");
    //  return;

  }
    bool g=ui->radioButton_7->isChecked();
    bool g1=ui->radioButton_8->isChecked();
  if(g==1){
    text1= c.encryption(text);
  }else if( g1==1){
       text1= c. decryption(text);
  }else {
      QMessageBox::warning(this,"ошибка ввода","не выбрано преобразование");
      return;
  }
   ui->textEdit_2->setText(text1);
}
