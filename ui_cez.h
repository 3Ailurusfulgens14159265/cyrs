/********************************************************************************
** Form generated from reading UI file 'cez.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CEZ_H
#define UI_CEZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_cez
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_17;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_2;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_13;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *cez)
    {
        if (cez->objectName().isEmpty())
            cez->setObjectName(QString::fromUtf8("cez"));
        cez->resize(637, 520);
        gridLayout_2 = new QGridLayout(cez);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(cez);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        label_2 = new QLabel(cez);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);

        verticalLayout_18->addWidget(label_2);


        verticalLayout_17->addLayout(verticalLayout_18);

        textEdit = new QTextEdit(cez);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_17->addWidget(textEdit);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        label_3 = new QLabel(cez);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setPointSize(12);
        label_3->setFont(font2);

        verticalLayout_19->addWidget(label_3);

        lineEdit_4 = new QLineEdit(cez);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_19->addWidget(lineEdit_4);


        verticalLayout_17->addLayout(verticalLayout_19);


        verticalLayout_16->addLayout(verticalLayout_17);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        radioButton_7 = new QRadioButton(cez);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setFont(font2);

        horizontalLayout_8->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(cez);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setFont(font2);

        horizontalLayout_8->addWidget(radioButton_8);

        pushButton_2 = new QPushButton(cez);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_8->addWidget(pushButton_2);


        horizontalLayout_7->addLayout(horizontalLayout_8);


        verticalLayout_16->addLayout(horizontalLayout_7);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        label_13 = new QLabel(cez);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font2);

        verticalLayout_20->addWidget(label_13);

        textEdit_2 = new QTextEdit(cez);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        verticalLayout_20->addWidget(textEdit_2);


        verticalLayout_16->addLayout(verticalLayout_20);


        gridLayout->addLayout(verticalLayout_16, 1, 0, 1, 1);

        pushButton = new QPushButton(cez);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(cez);

        QMetaObject::connectSlotsByName(cez);
    } // setupUi

    void retranslateUi(QDialog *cez)
    {
        cez->setWindowTitle(QCoreApplication::translate("cez", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("cez", "\320\250\320\270\321\204\321\200 \320\246\320\265\320\267\320\260\321\200\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("cez", "\321\202\320\265\320\272\321\201\321\202", nullptr));
        label_3->setText(QCoreApplication::translate("cez", "\320\272\320\273\321\216\321\207", nullptr));
        radioButton_7->setText(QCoreApplication::translate("cez", "\321\200\320\260\321\201\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        radioButton_8->setText(QCoreApplication::translate("cez", "\320\267\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cez", "\320\277\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\321\214", nullptr));
        label_13->setText(QCoreApplication::translate("cez", "\320\277\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\275\321\213\320\271 \321\202\320\265\320\272\321\201", nullptr));
        pushButton->setText(QCoreApplication::translate("cez", "\320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cez: public Ui_cez {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CEZ_H
