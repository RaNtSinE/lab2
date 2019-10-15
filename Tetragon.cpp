#include <math.h>
#include <iostream>
#include <iomanip>
#include <cstring>
#include "Tetragon.h"
using namespace std;

// показать объект
void Tetragon::Show() const
{
  cout << name << ":";
  v1.Show(); v2.Show(); v3.Show(); v4.Show();
  cout << endl;
}


// показать стороны и площадь объекта
double Tetragon::GetSide() const
{
  double p = (a + b + c + d) / 2;
  double s = sqrt((p - a) * (p - b) * (p - c) * (p - d));
  return s;
}
void Tetragon::Move(Point dp)
{
  v1 += dp;
  v2 += dp;
  v3 += dp;
  v4 += dp;
}
