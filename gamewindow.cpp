#include "gamewindow.h"
#include "ui_gamewindow.h"

GameWindow::GameWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);

}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::closeEvent(QCloseEvent *e)
{
    emit siClosed();
}
