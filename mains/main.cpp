#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>

#include "pol_rec.h"

using namespace std;

int main()
{
  int what,run=0,rerun=0;
  double XX,YY,XXX,YYY;

ReRun:

  cout << "Enter 1 to Convert to pol from rec \nEnter 2 to convert to Rec"
       <<    "\nEnter 3 to Capacitor reactence\nEnter 4 to get inductive reactence\n";
  cin >> run;
  if(run==1)
  {
    Pothag test;
    test.GetXY();
    test.PothagMath();
    test.TanMath();
    XX = test.GetX2();
    YY = test.GetY2();
    cout << XX << "<"<<YY <<"degrees\n";
  }
  if (run ==2)
  {
    PolToRec PolConvert;
    PolConvert.GetZB();
    PolConvert.Convert();
    XXX = PolConvert.GetX();
    YYY = PolConvert.GetY();
    cout << "\n C = "<<XXX <<"+j" << YYY <<endl;
  }
  if (run == 3)
  {
    double F5,C5,Xc5;
    Capacitor Cap;
    Cap.GetFCXc();
    Cap.Formula();
    F5 = Cap.GetF();
    C5 = Cap.GetC();
    Xc5 = Cap.GetXc();
    cout << "Xc  =  " << Xc5 <<"\n F = " << F5 <<"\n C = " << C5 <<endl;
  }

  if (run == 4)
  {
    double F,L,Xl;
    Inductance Ind;
    Ind.GetFLXl();
    Ind.Formula();
    F = Ind.GetF();
    L = Ind.GetL();
    Xl = Ind.GetXl();
    cout << " Xl = "<<Xl << "\n F = " << F << "\n L = " << L <<endl;
  }

  if (run ==5)
  {
    PolToRecAdd PolConvertAdd;
    PolConvertAdd.GetZB();
    PolConvertAdd.Convert();
    XXX = PolConvertAdd.GetX();
    YYY = PolConvertAdd.GetY();
    cout << "\n C = "<<XXX <<"+j" << YYY <<endl;
  }

  cout << "\n Do you want to run again ? \n Press 1 for yes and 0 for no\n...";
  cin >> rerun;
  if (rerun==1) goto ReRun;
}
