//
// Created by Donut on 17.10.2026.
//

#include "User.h"

#include <algorithm>

User::User(std::string firstName, std::string lastName, std::string PESEL, std::string address) {
    this->firstName = std::move(firstName);
    this->lastName = std::move(lastName);
    this->PESEL = std::move(PESEL);
    this->address = std::move(address);
}

std::string User::getUser() const {
    return this->firstName + " " + this->lastName + " " + this->PESEL + " " + this->address;
}

std::string User::getFirstName() const {
    return firstName;
}

std::string User::getLastName() const {
    return lastName;
}

std::string User::getPESEL() const {
    return PESEL;
}

std::string User::getAddress() const {
    return address;
}

