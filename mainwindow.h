#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    int playerTurn(int buttonIndex);

    bool winner(int clickedButton[], int player);

    void reset();

private:
    Ui::MainWindow *ui;

    int clickCounter = 0;

    int clickedButton[9]={0,0,0,0,0,0,0,0,0};

    int modulus;

    int winCombinations[8][4] = { {0,1,2},{0,3,6},{6,7,8},{2,5,8},{0,4,8},{2,4,6},{1,4,7},{3,4,5}};

    bool gameOver = false;

};

#endif // MAINWINDOW_H
