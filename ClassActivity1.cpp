//Swap values of variables

#include "ClassActivity1.h"
#include <iostream>

void swap(int variable1, int variable2) {
  int temp = variable1;
  variable1 = variable2;
  variable2 = temp;

  std::cout << "Variable 1 is now " << variable1 << ", and Variable 2 is now " << variable2;
}

int main() {
  swap(1, 2);
}