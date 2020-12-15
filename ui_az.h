/********************************************************************************
** Form generated from reading UI file 'az.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AZ_H
#define UI_AZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_az
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
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_13;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *az)
    {
        if (az->objectName().isEmpty())
            az->setObjectName(QString::fromUtf8("az"));
        az->resize(602, 511);
        gridLayout_2 = new QGridLayout(az);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(az);
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
        label_2 = new QLabel(az);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);

        verticalLayout_18->addWidget(label_2);


        verticalLayout_17->addLayout(verticalLayout_18);

        textEdit = new QTextEdit(az);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_17->addWidget(textEdit);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));

        verticalLayout_17->addLayout(verticalLayout_19);


        verticalLayout_16->addLayout(verticalLayout_17);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        radioButton_2 = new QRadioButton(az);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        QFont font2;
        font2.setPointSize(12);
        radioButton_2->setFont(font2);

        horizontalLayout_8->addWidget(radioButton_2);

        radioButton = new QRadioButton(az);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font2);

        horizontalLayout_8->addWidget(radioButton);

        pushButton_2 = new QPushButton(az);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_8->addWidget(pushButton_2);


        horizontalLayout_7->addLayout(horizontalLayout_8);


        verticalLayout_16->addLayout(horizontalLayout_7);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        label_13 = new QLabel(az);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font2);

        verticalLayout_20->addWidget(label_13);

        textEdit_2 = new QTextEdit(az);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        verticalLayout_20->addWidget(textEdit_2);


        verticalLayout_16->addLayout(verticalLayout_20);


        gridLayout->addLayout(verticalLayout_16, 1, 0, 1, 1);

        pushButton = new QPushButton(az);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(az);

        QMetaObject::connectSlotsByName(az);
    } // setupUi

    void retranslateUi(QDialog *az)
    {
        az->setWindowTitle(QCoreApplication::translate("az", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("az", "\320\250\320\270\321\204\321\200 A\321\202\320\261\320\260\321\210", nullptr));
        label_2->setText(QCoreApplication::translate("az", "\321\202\320\265\320\272\321\201\321\202", nullptr));
        radioButton_2->setText(QCoreApplication::translate("az", "\321\200\320\260\321\201\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        radioButton->setText(QCoreApplication::translate("az", "\320\267\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("az", "\320\277\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\321\214", nullptr));
        label_13->setText(QCoreApplication::translate("az", "\320\277\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\275\321\213\320\271 \321\202\320\265\320\272\321\201", nullptr));
        pushButton->setText(QCoreApplication::translate("az", "\320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class az: public Ui_az {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AZ_H
