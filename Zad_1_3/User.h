//
// Created by Donut on 17.10.2026.
//

#ifndef ZAD_1_3_USER_H
#define ZAD_1_3_USER_H
#include <string>
#include <utility>

class User {
public:
    User(std::string firstName, std::string lastName, std::string PESEL, std::string address);
    [[nodiscard]] std::string getUser() const;

    [[nodiscard]] std::string getFirstName() const;

    [[nodiscard]] std::string getLastName() const;

    [[nodiscard]] std::string getPESEL() const;

    [[nodiscard]] std::string getAddress() const;

private:
    std::string firstName;
    std::string lastName;
    std::string PESEL;
    std::string address;
};

#endif //ZAD_1_3_USER_H
