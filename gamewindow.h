#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include "computerplayer.h"
#include "dealer.h"
#include "humanplayer.h"
#include "table.h"

#include <QWidget>

namespace Ui {
class GameWindow;
}

class GameWindow : public QWidget
{
    Q_OBJECT
private:
    Ui::GameWindow *ui;
    Dealer *m_dealer;
    Table *m_table;
    HumanPlayer *m_human;
    ComputerPlayer *m_computer;

protected:
    virtual void closeEvent(QCloseEvent *e);


public:
    explicit GameWindow(QWidget *parent = 0);
    ~GameWindow();
private slots:

signals:
    void siClosed();
};

#endif // GAMEWINDOW_H
