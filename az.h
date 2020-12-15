#ifndef AZ_H
#define AZ_H

#include <QDialog>

namespace Ui {
class az;
}

class az : public QDialog
{
    Q_OBJECT

public:
    explicit az(QWidget *parent = nullptr);
    ~az();
signals:
    void firstWindow();  // Сигнал для первого окна на открытие
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::az *ui;
};

#endif // AZ_H
