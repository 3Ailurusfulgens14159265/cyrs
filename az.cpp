#include "az.h"
#include "ui_az.h"
#include"QMessageBox"
#include"az133.h"
az::az(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::az)
{this->setWindowFlags (this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    ui->setupUi(this);
    this->setWindowTitle("Шифр Атбаш");
}

az::~az()
{
    delete ui;
}
bool find_first_not_of2(QString in_wich_is_searched, QString what_is_searched){
    for (int i=0; i<what_is_searched.length(); i++) if(!(in_wich_is_searched.contains(what_is_searched[i]))) return true;
    return false;
   }
void az::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
        emit firstWindow();
}

void az::on_pushButton_2_clicked()
{
    QString  text1;
   QString text=ui->textEdit->toPlainText();



 QString a = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ ";
   az133 z(1);
     bool f= find_first_not_of2( a,text);
  if(f){
      QMessageBox::warning(this,"ошибка ввода","неправильно введён текст");
    //  return;

  }
 bool g=ui->radioButton->isChecked();
    bool g1=ui->radioButton_2->isChecked();
  if(g==1){
    text1= z.encryption(text);
  }else if( g1==1){
       text1= z. decryption(text);
  }else {
      QMessageBox::warning(this,"ошибка ввода","не выбрано преобразование");
      return;
  }
   ui->textEdit_2->setText(text1);
}
