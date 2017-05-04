#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include <QObject>

class HumanPlayer : public QObject
{
    Q_OBJECT
public:
    explicit HumanPlayer(QObject *parent = 0);

signals:

public slots:
};

#endif // HUMANPLAYER_H