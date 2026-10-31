//
// Created by Donut on 28.10.2026.
//

#include "Date.h"

#include <format>
#include <string>

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

std::string Date::getDate() const {
    return std::format("{}-{}-{}", day, month, year);
}

bool Date::setDate(int day, int month, int year) {
    if (year < 0) {return false;}
    if (day < 1) {return false;}
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (day > 31) {return false;}
            break;

        case 4: case 6: case 9: case 11:
            if (day > 30) {return false;}
            break;

        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                if (day > 29) {return false;}
            }
            else {
                if (day > 28) {return false;}
            }
            break;

        default: return false;
    }



    return true;

}
