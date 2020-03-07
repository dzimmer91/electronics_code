#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>

#include "pol_rec.h"

using namespace std;

double Pothag::GetX2(void)
{
  return Pothag::X2;
}
void Pothag::GetXY(void)
{
  cout << "Enter X :";
  cin >> Pothag::X;
  cout << "\nEnter Y :";
  cin >> Pothag::Y;
}
void Pothag::TanMath()
{
  double Results,R2,Deg;
  Results = Y/X;
  R2 = atan(Results);
  Deg = 180/PI;
  Y2 = R2 * Deg;
}

void  Pothag::PothagMath(void)
{
  double X1,Y1,Results;
  X1 = pow(X,2);
  Y1 = pow(Y,2);
  Results = X1+Y1;
  Pothag::X2 = sqrt(Results);
}
double Pothag::GetY2()
{
  return Pothag::Y2;
}
void PolToRec::GetZB()
{
  cout << "\n Enter Z : ";
  cin >> Z;
  cout << "\nEnter the degree : ";
  cin >> B;
}
void PolToRec::Convert(void)
{
  double Deg;
  Deg = 180/PI;
  X = Z *(cos((B/Deg)));
  Y = Z *(sin((B/Deg)));
}
double PolToRec::GetX()
{
  return X;
}
double PolToRec::GetY()
{
  return Y;
}


void Capacitor::GetFCXc()
{

  F1=0;C1=0;Xc1=0;
  cout << " \nEnter 1 if you have the Frequency  else enter 0\n";
  cin >> F1;
  cout << "\nEnter 1 if you have the Capatance else enter 0\n";
  cin >> C1;
  cout << "\nEnter 1 if you have Xc else enter 0 \n";
  cin >> Xc1;

  if(Xc1==1)
  {
    cout << "\nEnter Xc : ";
    cin >> Xc;
    cout << endl;
  }
  if(F1==1)
  {
    cout << "\nEnter the Frequency : ";
    cin >> F;
    cout <<endl;
   }
   if(C1==1)
   {
     cout << "\nEnter the Capatance : ";
     cin >> C;
     cout << endl;
   }

}
void Capacitor::Formula(void)
{
  if(Xc1==0 && F1==1 && C1==1)
  {
    Xc= 1/((2*PI)*(F*C));
  }
  if(F1==0 && Xc1==1 && C1==1)
  {
    F= 1/((2*PI)*(Xc*C));
  }
  if(C1==0 && Xc1==1 && F1==1)
  {
    C=1/((2*PI)*(Xc*F));
  }
};
double Capacitor::GetC()
{
  return C;
};
double Capacitor::GetF()
{
  return F;
}
double Capacitor::GetXc()
{
  return Xc;
}

void Inductance::GetFLXl()
{
  F1=0;L1=0;Xl1=0;
  cout << " \nEnter 1 if you have the Frequency  else enter 0\n";
  cin >> F1;
  cout << "\nEnter 1 if you have the Inductance else enter 0\n";
  cin >> L1;
  cout << "\nEnter 1 if you have Xl else enter 0 \n";
  cin >> Xl1;

  if(Xl1==1)
  {
    cout << "\nEnter Xl : ";
    cin >> Xl;
    cout << endl;
  }
  if(F1==1)
  {
     cout << "\nEnter the Frequency : ";
     cin >> F;
     cout <<endl;
   }
   if(L1==1)
   {
      cout << "\nEnter the Inductance : ";
      cin >> L;
      cout << endl;
   }

}
void Inductance::Formula(void)
{
  if(Xl1==0 && F1==1 && L1==1)
  {
    Xl= ((2*PI)*(F*L));
  }
  if(F1==0 && Xl1==1 && L1==1)
  {
    F= Xl/((2*PI)*(L));    //Xl = 2*PI *F *L , Xl/F =  2* PI * L, F = ( 2 * PI * L * Xl) ^-1
  }
  if(L1==0 && Xl1==1 && F1==1)
  {
    L=Xl/((2*PI)*(F));
  }
};
double Inductance::GetL()
{
  return L;
};
double Inductance::GetF()
{
  return F;
}
double Inductance::GetXl()
{
  return Xl;
}
//Converting from Polar Form to Rectangular Form
void PolToRecAdd::GetZB()
{
  int number=0;
  cout << " Enter the number of problems to add : ";
  cin >> number;
  for(int a=0; a < number; a++)
  {
     cout << "\n Enter Z : ";
     cin >> PolToRecAdd::Z[a];
     cout << "\nEnter the degree : ";
     cin >> PolToRecAdd::B[a];

  }
  NumberToAdd = number;
}
void PolToRecAdd::Convert(void)
{
  int number = NumberToAdd;

  double Deg;
  Deg = 180/PI;
  for(int i=0; i < number; i++)
  {
    X[i] = PolToRecAdd::Z[i] *(cos((PolToRecAdd::B[i]/Deg)));
    Y[i] = PolToRecAdd::Z[i] *(sin((PolToRecAdd::B[i]/Deg)));
  }
  for(int i=0; i<number; i++)
  {
    XX = X[i]+XX;
    YY = Y[i]+YY;
  }
}
double PolToRecAdd::GetX()
{
  return XX;
}
double PolToRecAdd::GetY()
{
  return YY;
}
