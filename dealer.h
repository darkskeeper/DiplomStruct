#ifndef DEALER_H
#define DEALER_H

#include <QObject>

class Dealer : public QObject
{
    Q_OBJECT
public:
    explicit Dealer(QObject *parent = 0);

signals:

public slots:
};

#endif // DEALER_H