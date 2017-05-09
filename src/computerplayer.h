#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H

#include <QObject>

class ComputerPlayer : public QObject
{
    Q_OBJECT
public:
    explicit ComputerPlayer(QObject *parent = 0);

signals:

public slots:
};

#endif // COMPUTERPLAYER_H