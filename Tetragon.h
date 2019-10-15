#pragma once
#include <math.h>
#include "Point.h"
#include "Polygon.h"

class Tetragon : public Polygon
{
public:
  Tetragon(Point _v1, Point _v2, Point _v3, Point _v4, std::string _name)
  : v1(_v1), v2(_v2), v3(_v3), v4(_v4), name(_name)
  {
    a = sqrt((v1.x - v2.x) * (v1.x - v2.x) + (v1.y - v2.y) * (v1.y - v2.y));
    b = sqrt((v2.x - v3.x) * (v2.x - v3.x) + (v2.y - v3.y) * (v2.y - v3.y));
    c = sqrt((v3.x - v4.x) * (v3.x - v4.x) + (v3.y - v4.y) * (v3.y - v4.y));
    d = sqrt((v1.x - v4.x) * (v1.x - v4.x) + (v1.y - v4.y) * (v1.y - v4.y));
  }        //конструктор
  Point Get_v1() const { return v1; }                 //получ-ть знач-е v1
  Point Get_v2() const { return v2; }                 //получ-ть знач-е v2
  Point Get_v3() const { return v3; }                 //получ-ть знач-е v3
  Point Get_v4() const { return v4; }
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
  Point v1, v2, v3, v4;               //вершины
  double a;                       //сторона, соед-щая v1 и v2
  double b;                       //сторона, соед-щая v2 и v3
  double c;                       //сторона, соед-щая v3 и v4
  double d;                       //сторона, соед-щая v3 и v4
};
