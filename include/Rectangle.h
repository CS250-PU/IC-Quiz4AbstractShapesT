#pragma once

#include "../include/Shape2D.h"

class Rectangle : public Shape2D {
public:
  Rectangle (const std::string &rcName, double, double);
  virtual double getArea () const;
  double getLength () const;
  double getWidth () const;
  void setLength (double);
  void setWidth (double);
private:
  double mLength;
  double mWidth;
};