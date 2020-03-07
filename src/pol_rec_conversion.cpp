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
