#pragma once

#include "../include/Shape2D.h"

class Circle : public Shape2D {
public:
  Circle (const std::string &rcName, double);
  virtual double getArea () const;

private:
  double mRadius;
};
