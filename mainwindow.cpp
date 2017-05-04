#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_settings = new Settings();
    m_game = new GameWindow();
    connect(this->m_game, SIGNAL(siClosed()), SLOT(on_gameWindow_closed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_startGame_clicked()
{
    this->hide();
    m_game->show();
}

void MainWindow::on_pb_settings_clicked()
{
    this->hide();
    m_settings->exec();
}

void MainWindow::on_pb_exit_clicked()
{
    this->close();
}

void MainWindow::on_gameWindow_closed()
{
    this->show();
}
