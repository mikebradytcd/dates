#include <iostream>
#include "date.hpp"

int main() {
  std::cout << "Enter the date as year month day on one line, e.g. 2020 10 23" << std::endl;
  int y,m,d;
  std::cin >> y >> m >> d;
  date da(y,m,d);
  da.print_diagnostics();
  int dn = da.get_date_number();
  std::cout << "The day number is " << dn << "." << std::endl;
}