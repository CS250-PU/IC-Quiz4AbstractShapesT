#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "../include/Shape2D.h"
#include "../include/Rectangle.h"
#include "../include/Circle.h"

int main () {
  std::vector<Shape2D *> pcShapes;
  std::ifstream cIn;
  std::string figure;
  double radius, length, width;

  cIn.open ("data/figures.txt");

  if (!cIn.is_open ()) {
    std::cout << "figures.txt not open" << std::endl;
    exit (EXIT_FAILURE);
  }

  // TODO #1 Read in each figure (rectangle or circle) into the pcShapes vector
  while (!cIn.eof ()) {
    cIn >> figure;

  }

  // TODO #2 Write a single range-based for loop to match the expected output
  // shown below


  // TODO #3 Free up all dynamically allocated memory


  // TODO #4 Eliminate any warnings in the program

  // TODO #5 Create a pdf of the .h/.cpp files and drop in folder on Moodle

  cIn.close ();

  return 0;
}

/* Expected Output

rectangle : 6
circle : 12.5664
circle : 50.2654
rectangle : 12

*/