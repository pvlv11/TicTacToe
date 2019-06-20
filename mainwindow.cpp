#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int player = playerTurn(0);
    if (player == 1){
        ui->pushButton->setText("X");}
    else if (player == 2){
        ui->pushButton->setText("O");}

    winner(clickedButton, player);

}

void MainWindow::on_pushButton_2_clicked()
{
    if (gameOver){
        reset();
    }

    int player = playerTurn(1);
    if (player == 1){
        ui->pushButton_2->setText("X");}
    else if (player == 2){
        ui->pushButton_2->setText("O");}

    gameOver = winner(clickedButton, player);
}

void MainWindow::on_pushButton_3_clicked()
{
    if (gameOver){
        reset();
    }

    int player = playerTurn(2);
    if (player == 1){
        ui->pushButton_3->setText("X");}
    else if (player == 2){
        ui->pushButton_3->setText("O");}

    gameOver =winner(clickedButton, player);
}

void MainWindow::on_pushButton_4_clicked()
{
    if (gameOver){
        reset();
    }

    int player = playerTurn(3);
    if (player == 1){
        ui->pushButton_4->setText("X");}
    else if (player == 2){
        ui->pushButton_4->setText("O");}

    gameOver =winner(clickedButton, player);
}

void MainWindow::on_pushButton_5_clicked()
{
    if (gameOver){
        reset();
    }


    int player = playerTurn(4);
    if (player == 1){
        ui->pushButton_5->setText("X");}
    else if (player == 2){
        ui->pushButton_5->setText("O");}

    gameOver =winner(clickedButton, player);
}

void MainWindow::on_pushButton_6_clicked()
{
    if (gameOver){
        reset();
    }


    int player = playerTurn(5);
    if (player == 1){
        ui->pushButton_6->setText("X");}
    else if (player == 2){
        ui->pushButton_6->setText("O");}

    gameOver =winner(clickedButton, player);
}

void MainWindow::on_pushButton_7_clicked()
{
    if (gameOver){
        reset();
    }


    int player = playerTurn(6);
    if (player == 1){
        ui->pushButton_7->setText("X");}
    else if (player == 2){
        ui->pushButton_7->setText("O");}

   gameOver = winner(clickedButton, player);
}

void MainWindow::on_pushButton_8_clicked()
{
    if (gameOver){
        reset();
    }


    int player = playerTurn(7);
    if (player == 1){
        ui->pushButton_8->setText("X");}
    else if (player == 2){
        ui->pushButton_8->setText("O");}

   gameOver = winner(clickedButton, player);
}

void MainWindow::on_pushButton_9_clicked()
{
    if (gameOver){
        reset();
    }


    int player = playerTurn(8);
    if (player == 1){
        ui->pushButton_9->setText("X");}
    else if (player == 2){
        ui->pushButton_9->setText("O");}

   gameOver = winner(clickedButton, player);
}

int MainWindow::playerTurn(int buttonIndex){
    if (clickedButton[buttonIndex] == 0) {
        clickCounter++;
        modulus = clickCounter%2;
        switch (modulus){
        case 1: ui->label_2->setText("Player 2");
            clickedButton[buttonIndex] = 1;
            return 1;
        case 0: ui->label_2->setText("Player 1");
            clickedButton[buttonIndex] = 2;
            return 2;
        }
    }
    return 0;
}

bool MainWindow::winner(int clickedButton[], int player){
    bool winningCombination = true;
    for (int i=0; i<8; i++){
        for (int j =0; j<3 ; j++) {
            if(clickedButton[winCombinations[i][j]] != player){
                winningCombination = false;
                break;
            }
        }
        if (winningCombination){
            ui->label->setText("Winner:");
            ui->label_2->setText("Player "+ QString::number(player));
            return true;
        }
        winningCombination = true;
        }
    return false;
    }


void MainWindow::reset(){
    clickCounter = 0;
    for (int i=0; i<9; i++){
        clickedButton[i] = 0;
    }
    QPushButton* buttonsArray[] = {ui->pushButton, ui->pushButton_2, ui->pushButton_3, ui->pushButton_4,
                                   ui->pushButton_5, ui->pushButton_6, ui->pushButton_7, ui->pushButton_8, ui->pushButton_9};

    for (int i=0; i<9; i++){
        buttonsArray[i]->setText("");
    }
    ui ->label->setText("Turn:");
    ui->label_2->setText("Player 1");
    gameOver = false;
}
