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
	imageBack = new QPixmap(":/Images/back.png");
	isGameStart = true;
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
	//QMessageBox::information(0, "Information", "Next deal clicked");
	if(isGameStart)
	{
		showTable();//showing buttons, bank and bet labels
	}
	setTableReady();
/*	hide_table();//hiding table and ai_hand cards, hiding start_game button
	room->startGame();//deals and showing pl and ai amount
	if(ui->Lcur_am_ai->text().toInt() == 0)
	{
		setWindowTitle("Player won");
		close();
	}
	if(ui->Lcur_am->text().toInt() <= 0)
	{
		setWindowTitle("AI won");
		close();
	}
	fAITurn();*/
}


void GameWindow::hideAll()
{
	hideCards();
	ui->lbCompAmount->hide();
	ui->lbCompAmountInfo->hide();
	ui->lbPlAmount->hide();
	ui->lbPlAmountInfo->hide();
	ui->pbNextDeal->setText("Start game");
	ui->pbCall->hide();
	ui->pbFold->hide();
	ui->pbRaise->hide();
	ui->spinBox->hide();
}

void GameWindow::hideCards()
{
	ui->lbPlayerCard1->hide();
	ui->lbPlayerCard2->hide();
	ui->lbCompCard1->hide();
	ui->lbCompCard2->hide();
	ui->lbTableCard1->hide();
	ui->lbTableCard2->hide();
	ui->lbTableCard3->hide();
	ui->lbTableCard4->hide();
	ui->lbTableCard5->hide();
	ui->lbWinner->hide();
	ui->lbCurBank->hide();
	ui->lbCurBankInfo->hide();
	ui->lbCurBet->hide();
	ui->lbCurBetInfo->hide();
	ui->lbPlAmount->hide();
	ui->lbPlAmountInfo->hide();
	ui->lbCompAmount->hide();
	ui->lbCompAmountInfo->hide();
}

void GameWindow::showTable()
{
	ui->lbPlayerCard1->show();
	ui->lbPlayerCard1->setPixmap(imageBack->scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbPlayerCard1->setMask(imageBack->mask());
	ui->lbPlayerCard2->show();
	ui->lbPlayerCard2->setPixmap(imageBack->scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbPlayerCard2->setMask(imageBack->mask());
	ui->lbCompCard1->show();
	ui->lbCompCard1->setPixmap(imageBack->scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbCompCard1->setMask(imageBack->mask());
	ui->lbCompCard2->show();
	ui->lbCompCard2->setPixmap(imageBack->scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbCompCard2->setMask(imageBack->mask());
	ui->lbTableCard1->show();
	ui->lbTableCard1->setPixmap(imageBack->scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbTableCard1->setMask(imageBack->mask());
	ui->lbTableCard2->show();
	ui->lbTableCard2->setPixmap(imageBack->scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbTableCard2->setMask(imageBack->mask());
	ui->lbTableCard3->show();
	ui->lbTableCard3->setPixmap(imageBack->scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbTableCard3->setMask(imageBack->mask());
	ui->lbTableCard4->show();
	ui->lbTableCard4->setPixmap(imageBack->scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbTableCard4->setMask(imageBack->mask());
	ui->lbTableCard5->show();
	ui->lbTableCard5->setPixmap(imageBack->scaled(100,100,Qt::KeepAspectRatioByExpanding));
	ui->lbTableCard5->setMask(imageBack->mask());
	ui->lbCurBank->show();
	ui->lbCurBankInfo->show();
	ui->lbCurBet->show();
	ui->lbCurBetInfo->show();
	ui->lbPlAmount->show();
	ui->lbPlAmountInfo->show();
	ui->lbCompAmount->show();
	ui->lbCompAmountInfo->show();
	ui->pbCall->show();
	ui->pbFold->show();
	ui->pbRaise->show();
	ui->spinBox->show();
	ui->pbNextDeal->setText("Next Deal");
}

void GameWindow::setTableReady()
{
	ui->lbCurBank->setText("0");
	ui->lbCurBet->setText("0");
	ui->pbNextDeal->hide();

}

void GameWindow::closeEvent(QCloseEvent *event)
{
	emit siClosed();
	isGameStart = true;
	event->accept();

}

void GameWindow::showEvent(QShowEvent *event)
{
	hideAll();
	return;
	//player cards
	/*QPixmap image0(":/Images/0.png");
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

	event->accept();*/
}
