#include "../include/Rectangle.h"

Rectangle::Rectangle (const std::string &rcName, double length, double width) : 
Shape2D (rcName) {
  mLength = length;
  mWidth = width;
}

double Rectangle::getArea () const {
  return mLength * mWidth;
}