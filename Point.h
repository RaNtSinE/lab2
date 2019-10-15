#ifndef POINT_H
#define POINT_H

class Point
{
public:
  Point (double _x = 0, double _y = 0) : x(_x), y(_y) {}      //конструктор
  void operator +=(Point&);
  void SetAll(double, double);
  void Show() const;
public:
  double x,y;
};

#endif
