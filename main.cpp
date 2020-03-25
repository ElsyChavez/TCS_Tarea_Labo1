#include <stdlib.h>
#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

int main(void) {
  Matrix initial, inv;
  zeroes(initial, 3);
//if(deter)

//fila 1
  initial.at(0).at(0) = 2;
  initial.at(0).at(1) = 2;
  initial.at(0).at(2) = 3;
  //fila 2
  initial.at(1).at(0) = 4;
  initial.at(1).at(1) = 5;
  initial.at(1).at(2) = 6;
  //fila 3
  initial.at(2).at(0) = 7;
  initial.at(2).at(1) = 8;
  initial.at(2).at(2) = 9;

  showMatrix(initial);
  cout << endl;

  inversa(initial, inv);
  showMatrix(inv);

  return 0;

}