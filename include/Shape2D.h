#pragma once

#include <string>

class Shape2D {
public:
  Shape2D (const std::string &rcName);
  ~Shape2D ();
  std::string getName () const;
  virtual double getArea () const = 0;

private:
  std::string mcName;
};