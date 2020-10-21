#include <iostream>
#include "date.hpp"

using namespace std;

date::date(int y, int m, int d) {
  cout << "Constructor called with values: " << y << ", month: " << m << ", day: " << d << "." << endl;
  year = y;
  month = m;
  day = d;
}

date::date() {

}

date::~date() {

}

int date::get_date_number() {
  return 0; // placeholder
}

int date::get_day_of_week() {
  return 0; // placeholder
}

// diagnostics stuff only
void date::print_diagnostics() {
  cout << "Values: year: " << year << ", month: " << month << ", day: " << day << "." << endl;
}