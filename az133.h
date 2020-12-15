#ifndef AZ133_H
#define AZ133_H
#include <QApplication>

class az133 {
    QString a = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя ";
    QString c = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ ";

public:
int key;
    az133(int key) {
this->key=key;
    }

    QString encryption(QString text) {
        for (int e = 0,p=0, A = 0, h = 0, s = 0; h < text.size(); h++, s++) {
            for (int n = 0; n < a.size(); n++) {
                if (text[h] == a[n] || text[h] == c[n])
                 {   A = n;p++;}

            }
            if(p){
            e = (a.size()-A+1 ) % a.size();
            text[s] = a[e];}
            p=0;
        }
        return text;
    }
    QString decryption(QString text) {
        for (int e = 0,p=0, A = 0, h = 0, s = 0; h < text.size(); h++, s++) {
            for (int n = 0; n < a.size(); n++) {
                if (text[h] == a[n])
                   {   A = n;p++;}


            } if(p){
            e = ((a.size()-A+1) % a.size());
            text[s] = a[e];}
            p=0;
        }

        return text;
    }

};

#endif // AZ133_H
