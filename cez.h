#ifndef CEZ_H
#define CEZ_H

#include <QDialog>

namespace Ui {
class cez;
}

class cez : public QDialog
{
    Q_OBJECT

public:
    explicit cez(QWidget *parent = nullptr);
    ~cez();
signals:
    void firstWindow();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::cez *ui;
};

#endif // CEZ_H
