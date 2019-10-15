#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <math.h>
#include "Point.h"
#include "Polygon.h"

class Triangle : public Polygon
{
public:
  Triangle(Point _v1, Point _v2, Point _v3, std::string _name) : v1(_v1), v2(_v2), v3(_v3), name(_name)
  {
    a = sqrt((v1.x - v2.x) * (v1.x - v2.x) + (v1.y - v2.y) * (v1.y - v2.y));
    b = sqrt((v2.x - v3.x) * (v2.x - v3.x) + (v2.y - v3.y) * (v2.y - v3.y));
    c = sqrt((v1.x - v3.x) * (v1.x - v3.x) + (v1.y - v3.y) * (v1.y - v3.y));
  }         //конструктор
  Point Get_v1() const { return v1; }                 //получ-ть знач-е v1
  Point Get_v2() const { return v2; }                 //получ-ть знач-е v2
  Point Get_v3() const { return v3; }                 //получ-ть знач-е v3
  const std::string& GetName() const { return name; }              //получ-ть имя объекта
  const std::string& GetId() const { return objID; }
  double GetSide() const;
  void Show() const;                                  //показать объект
  void Move(Point);
public:
  static int count;               //кол-во созданных объектов
protected:
  std::string objID;                    //идентификатор объекта
  std::string name;                     //наименование треугольника
  Point v1, v2, v3;               //вершины
  double a;                       //сторона, соед-щая v1 и v2
  double b;                       //сторона, соед-щая v2 и v3
  double c;                       //сторона, соед-щая v1 и v3
};
#endif
