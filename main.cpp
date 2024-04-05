#include <QTest>

class ExampleTest : public QObject
{
    Q_OBJECT
    
private slots:
    void add()
    {
        QCOMPARE(4, (2+2));
    }
};

QTEST_GUILESS_MAIN(ExampleTest)
#include "main.moc"
