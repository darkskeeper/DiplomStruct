#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	this->setWindowTitle("Start menu");
    m_settings = new Settings();
    m_game = new GameWindow();
	connect(this->m_game, SIGNAL(siClosed()), this, SLOT(onGameClosed()));
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
	this->show();
}

void MainWindow::on_pb_exit_clicked()
{
	this->close();
}

void MainWindow::onGameClosed()
{
	this->show();
}
