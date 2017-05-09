#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gamewindow.h"
#include "settings.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MainWindow *ui;
    Settings *m_settings;
    GameWindow *m_game;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pb_startGame_clicked();
    void on_pb_settings_clicked();
    void on_pb_exit_clicked();
	void onGameClosed();

};

#endif // MAINWINDOW_H
