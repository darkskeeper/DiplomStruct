#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QPixmap>
#include <QBitmap>
#include <QCloseEvent>
#include <QMessageBox>

GameWindow::GameWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
	this->setWindowTitle("Poker");
	connect(ui->pbCall, SIGNAL(clicked()), this, SLOT(slCallClicked()));
	connect(ui->pbRaise, SIGNAL(clicked()), this, SLOT(slRaiseClicked()));
	connect(ui->pbFold, SIGNAL(clicked()), this, SLOT(slFoldClicked()));
	connect(ui->pbNextDeal, SIGNAL(clicked()), this, SLOT(slNextDealClicked()));
}

GameWindow::~GameWindow()
{
	delete ui;
}

void GameWindow::slCallClicked()
{
	QMessageBox::information(0, "Information", "Call clicked");
}

void GameWindow::slRaiseClicked()
{
	QMessageBox::information(0, "Information", "Raise clicked");
}

void GameWindow::slFoldClicked()
{
	QMessageBox::information(0, "Information", "Fold clicked");
}

void GameWindow::slNextDealClicked()
{
	QMessageBox::information(0, "Information", "Next deal clicked");
}


void GameWindow::closeEvent(QCloseEvent *event)
{
	emit siClosed();
	event->accept();

}

void GameWindow::showEvent(QShowEvent *event)
{
	//player cards
	QPixmap image0(":/Images/0.png");
	ui->lbPlayerCard1->setPixmap(image0.scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbPlayerCard1->setMask(image0.mask());
	QPixmap image1(":/Images/1.png");
	ui->lbPlayerCard2->setPixmap(image1.scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbPlayerCard2->setMask(image1.mask());
	//comp cards
	QPixmap image2(":/Images/2.png");
	ui->lbCompCard1->setPixmap(image2.scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbCompCard1->setMask(image2.mask());
	QPixmap image3(":/Images/3.png");
	ui->lbCompCard2->setPixmap(image3.scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbCompCard2->setMask(image3.mask());
	//table cards
	QPixmap image4(":/Images/4.png");
	ui->lbTableCard1->setPixmap(image4.scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbTableCard1->setMask(image4.mask());
	QPixmap image5(":/Images/5.png");
	ui->lbTableCard2->setPixmap(image5.scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbTableCard2->setMask(image5.mask());
	QPixmap image6(":/Images/6.png");
	ui->lbTableCard3->setPixmap(image6.scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbTableCard3->setMask(image6.mask());
	QPixmap image7(":/Images/7.png");
	ui->lbTableCard4->setPixmap(image7.scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbTableCard4->setMask(image7.mask());
	QPixmap image8(":/Images/8.png");
	ui->lbTableCard5->setPixmap(image8.scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbTableCard5->setMask(image8.mask());

	event->accept();
}
