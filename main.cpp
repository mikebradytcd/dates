#include <iostream>
#include "date.hpp"

int main() {
  date d(2000,1,1);
  d.print_diagnostics();
  std::cout << "Goodbye!\n";
}