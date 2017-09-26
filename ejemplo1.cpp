#include "ejemplo1.h"

ejemplo1::ejemplo1(): Ui_Counter()
{
  setupUi(this);
  show();
  num=0;
  connect(button, SIGNAL(clicked()),this,SLOT(doButton()));
  connect(&hilo, SIGNAL(timeout()),this,SLOT(doLCDnumber()));
  connect(restart, SIGNAL(clicked()),this,SLOT(restartContador()));
  
  hilo.start();
}

ejemplo1::~ejemplo1(){
}

void ejemplo1::doButton()
{
	
  if(hilo.getparado()){
   hilo.setparado(false);
  button->setText("Stop");
  }
  else{
     hilo.setparado(true);
    button->setText("Start"); 
  }
}

void ejemplo1::restartContador()
{
    num=0;
    lcdNumber->display(num);	
}


void ejemplo1::doLCDnumber()
{
  num++;
  lcdNumber->display(num);
}



