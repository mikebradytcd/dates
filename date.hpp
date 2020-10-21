#pragma once
class date {
  private:
  int year;
  int month;
  int day; // day of month

  public:
  date(int y, int m, int d); // convenience constructor
  date(); //default constructor
  ~date();
  // getters and setters should be here

  // methods we are required to implement
  int get_date_number();
  int get_day_of_week();
};