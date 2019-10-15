#pragma once
#include <vector>
#include "Polygon.h"
#include "Factory.h"

class Menu
{
public:
  Menu();
  int SelectJob() const;
  static int SelectItem(int);
};
