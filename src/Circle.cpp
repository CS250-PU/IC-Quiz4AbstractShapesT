#include "../include/Circle.h"

Circle::Circle (const std::string &rcName, double radius) : Shape2D (rcName){
  mRadius = radius;
}

double Circle::getArea () const {
  return 3.14159 * mRadius * mRadius;
}