#include "../include/Shape2D.h"

#include <string>

Shape2D::Shape2D (const std::string &rcName ) {
  mcName = rcName;
}

Shape2D::~Shape2D () {
}

std::string Shape2D::getName () const {
  return mcName;
}