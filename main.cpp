#include <iostream>
#include "date.hpp"

int main() {
  date d(2000,3,1);
  d.print_diagnostics();
  int dn = d.get_date_number();
  std::cout << "The date number is " << dn << "." << std::endl;
}