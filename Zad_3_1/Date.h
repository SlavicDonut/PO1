//
// Created by Donut on 28.10.2026.
//

#ifndef ZAD_3_1_DATE_H
#define ZAD_3_1_DATE_H
#include <string>


class Date {
public:
    [[nodiscard]] Date() = default;

    [[nodiscard]] Date(int day, int month, int year)
        : day(day),
          month(month),
          year(year) {
    }

    [[nodiscard]] int getDay() const;

    [[nodiscard]] int getMonth() const;

    [[nodiscard]] int getYear() const;

    [[nodiscard]] std::string getDate() const;

    bool setDate(int day, int month, int year);

private:
    int day = 0;
    int month = 0;
    int year = 0;

};


#endif //ZAD_3_1_DATE_H
