#include <iostream>
#include "date.hpp"

int main() {
  date d(2001,3,17);
  d.print_diagnostics();
  int dn = d.get_date_number();
  std::cout << "The day number is " << dn << "." << std::endl;
}