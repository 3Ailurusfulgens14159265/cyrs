/********************************************************************************
** Form generated from reading UI file 'vij.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIJ_H
#define UI_VIJ_H

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

class Ui_vij
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QTextEdit *textEdit_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *vij)
    {
        if (vij->objectName().isEmpty())
            vij->setObjectName(QString::fromUtf8("vij"));
        vij->resize(708, 614);
        gridLayout = new QGridLayout(vij);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(vij);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);


        verticalLayout_3->addLayout(verticalLayout);

        textEdit = new QTextEdit(vij);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_3->addWidget(textEdit);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(vij);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(12);
        label_3->setFont(font1);

        verticalLayout_2->addWidget(label_3);

        lineEdit = new QLineEdit(vij);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton_2 = new QRadioButton(vij);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font1);

        horizontalLayout->addWidget(radioButton_2);

        radioButton = new QRadioButton(vij);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font1);

        horizontalLayout->addWidget(radioButton);

        pushButton_2 = new QPushButton(vij);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(horizontalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(vij);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        verticalLayout_4->addWidget(label_4);

        textEdit_2 = new QTextEdit(vij);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        verticalLayout_4->addWidget(textEdit_2);


        verticalLayout_5->addLayout(verticalLayout_4);


        gridLayout->addLayout(verticalLayout_5, 4, 0, 1, 1);

        label = new QLabel(vij);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(19);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(vij);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 4, 2, 1, 1);


        retranslateUi(vij);

        QMetaObject::connectSlotsByName(vij);
    } // setupUi

    void retranslateUi(QDialog *vij)
    {
        vij->setWindowTitle(QCoreApplication::translate("vij", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("vij", "\321\202\320\265\320\272\321\201\321\202", nullptr));
        label_3->setText(QCoreApplication::translate("vij", "\320\272\320\273\321\216\321\207", nullptr));
        radioButton_2->setText(QCoreApplication::translate("vij", "\321\200\320\260\321\201\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        radioButton->setText(QCoreApplication::translate("vij", "\320\267\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("vij", "\320\277\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("vij", "\320\277\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\275\321\213\320\271 \321\202\320\265\320\272\321\201", nullptr));
        label->setText(QCoreApplication::translate("vij", "\320\250\320\270\321\204\321\200 \320\222\320\270\320\266\320\265\320\275\320\265\321\200\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("vij", "\320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vij: public Ui_vij {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIJ_H
