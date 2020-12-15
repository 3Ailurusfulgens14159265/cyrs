#ifndef VIJ_H
#define VIJ_H

#include <QDialog>

namespace Ui {
class vij;
}

class vij : public QDialog
{
    Q_OBJECT

public:
    explicit vij(QWidget *parent = nullptr);
    ~vij();
signals:
    void firstWindow();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::vij *ui;
};

#endif // VIJ_H
