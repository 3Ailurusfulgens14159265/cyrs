#ifndef VIJEN_H
#define VIJEN_H
#include <QApplication>

class vijen
{

    QString a = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ ";



    public:
    QString key;
    vijen(QString key) {
        this->key = key;
        }
        QString encryption(QString text) {
            for (int p=0, e = 0, A = 0, b = 0, h = 0, j = 0, s = 0; h < text.size(); h++, s++) {
                for (int n = 0; n < a.size(); n++) {
                    if (text[h] == a[n])
                    { A = n;
                        p++;
                    }


                    if (key[j] == a[n]) {
                        b = n;

                    }
                }
                if(p){
                j = (j + 1) % key.length();
                e = ((A + b) % a.size());
                text[s] = a[e];
                } //else text[s]='.';
                p=0;

            }
            return text;
        }
        QString decryption(QString text) {
            for (int p=0, e = 0, A = 0, b = 0, h = 0, j = 0, s = 0; h < text.size(); h++, s++) {
                for (int n = 0; n < a.size(); n++) {
                    if (text[h] == a[n]){
                        A = n;
                        p++;
                    }
                    if (key[j] == a[n]) {
                        b = n;
                    }
                }
                if(p){
                j = (j + 1) % key.length();
                e = ((A - b+ a.size()) % a.size());
                text[s] = a[e];
                } //else text[s]='.';
                p=0;

                     }
            return text;
        }
};

#endif // VIJEN_H
