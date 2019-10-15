#ifndef FACTORY_H
#define FACTORY_H

#include <vector>
#include "Point.h"
#include "Polygon.h"

class Factory
{
  friend class Menu;
public:
  Factory() {}
  void AddObject();
  void DeleteObject();
  void Show();
  void Move();
  void Compare();
private:
  std::vector<Polygon*> pObj;
};

#endif
