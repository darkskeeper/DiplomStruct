#ifndef TABLE_H
#define TABLE_H

#include <QObject>
#include "tablecards.h"

class Table : public QObject
{
    Q_OBJECT
private:
    TableCards *m_tableCards;
public:
    explicit Table(QObject *parent = 0);

signals:

public slots:
};

#endif // TABLE_H
