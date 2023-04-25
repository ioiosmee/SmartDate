#pragma once

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class SmartDate
{
private:
    short day;
    short month;
    short year;
public:
    SmartDate(short d, short m, short y);
};
SmartDate::SmartDate(short d, short m, short y)
{
    day = d;
    month = m;
    year = y;
}