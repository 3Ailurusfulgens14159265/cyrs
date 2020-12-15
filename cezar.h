#ifndef CEZAR_H
#define CEZAR_H
#include <QApplication>

class cezar {
    QString a = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя ";
    QString c = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ ";

public:
    int key;
    cezar(int key) {
        this->key = key%34;
    }

    QString encryption(QString text) {
        for (int e = 0, A = 0, p=0, h = 0, s = 0; h < text.size(); h++, s++) {
            for (int n = 0; n < a.size(); n++) {
                if (text[h] == a[n] || text[h] == c[n])
                   { A = n; p++;}

            }
             if(p){
            e = ((A +key) % a.size());
            text[s] = a[e];}
             p=0;
        }
        return text;
    }
    QString decryption(QString text) {
        for (int e = 0, A = 0,p=0, h = 0, s = 0; h < text.size(); h++, s++) {
            for (int n = 0; n < a.size(); n++) {
                if (text[h] == a[n] || text[h] == c[n])
                    { A = n; p++;}


            }
            if(p){
            e = ((A - key + a.size()) % a.size());
            text[s] = a[e];}
            p=0;
        }

        return text;
    }

};

#endif // CEZAR_H
