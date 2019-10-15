#include <math.h>
#include <iostream>
#include <iomanip>
#include <cstring>
#include "Point.h"
#include "Triangle.h"
using namespace std;


//показать объект
void Triangle::Show() const
{
  cout << name << ":";
  v1.Show(); v2.Show(); v3.Show();
  cout << endl;
}

// площадь объекта
double Triangle::GetSide() const
{
  double p = (a + b + c) / 2;
  double s = sqrt(p * (p - a) * (p - b) * (p - c));
  return s;
}
void Triangle::Move(Point dp)
{
  v1 += dp;
  v2 += dp;
  v3 += dp;
}
// Triangle f_triangle;
