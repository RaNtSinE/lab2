#ifndef POLYGON_H
#define POLYGON_H

#include <string>

class Polygon
{
public:
  virtual ~Polygon() {};
  virtual const std::string& GetName() const = 0;
  virtual const std::string& GetId() const = 0;
  virtual void Move(Point) = 0;
  virtual double GetSide() const = 0;
  virtual void Show() const = 0;
};

#endif
