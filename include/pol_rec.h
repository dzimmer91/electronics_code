#ifndef _POL_REC_H
#define _POL_REC_H

#define PI 3.14159265


class PolToRecAdd
{
  public:
    void GetZB(void);
    void Convert(void);
    double GetX();
    double GetY();


  private:
    int NumberToAdd;
    double X[10],XX;
    double Y[10],YY;
    double Z[10];  // number before angle
    double B[10];  //degrees
};


class Inductance
{
  public:
    void GetFLXl();
    void Formula();
    double GetF();
    double GetL();
    double GetXl();

  private:
    double F;
    double L;
    double Xl;
    int F1,L1,Xl1;

};
class Capacitor
{
  public:
    void GetFCXc();
    void Formula();
    double GetF();
    double GetC();
    double GetXc();

  private:
    double F;
    double C;
    double Xc;
    int F1,C1,Xc1;
};


class PolToRec
{
  public:
    void GetZB(void);
    void Convert(void);
    double GetX();
    double GetY();


  private:
    double X;
    double Y;
    double Z;  // number before angle
    double B;  //degrees
};

class Pothag
{
 public:
   void GetXY(void);
   void PothagMath(void);
   void TanMath(void);
   double GetX2(void);
   double GetY2(void);

 private:
   double X;
   double Y;
   double Y2;
   double X2;


};
#endif
