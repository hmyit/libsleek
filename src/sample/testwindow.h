#ifndef TESTWINDOW_H
#define TESTWINDOW_H

#include "sleekwindow.h"
#include "ui_testwindow.h"

class TestWindow : public SleekWindow
{
    Q_OBJECT
public:
    TestWindow(QApplication *app, SleekWindow *parent = 0);
    ~TestWindow();

public slots:
    void slot_buttonPushed();

private:
    Ui::TestWindow ui;
    void connectSignals();
};

#endif // TESTWINDOW_H