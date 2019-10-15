#include <iostream>
#include "Point.h"

using namespace std;

void Point::operator +=(Point& p)
{
  x += p.x;
  y += p.y;
}

void Point::SetAll(double _x, double _y)
{
  x = _x;
  y = _y;
}

void Point::Show() const
{
  cout << " (" << x << ", " << y << ")";
}
