#ifndef ejemplo1_H
#define ejemplo1_H
#include <QtGui>
#include "ui_counterDlg.h"
#include "hebras.h"

class ejemplo1 : public QWidget, public Ui_Counter
{
Q_OBJECT

private:
    hebras hilo;
    
public:
  
    int num;
    ejemplo1();
    virtual ~ejemplo1();
    
public slots:
    void doButton();
    void doLCDnumber();
    void restartContador();
	
};

#endif // ejemplo1_H
