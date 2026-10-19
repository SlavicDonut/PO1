//
// Created by Donut on 19.10.2026.
//

#include "UserManager.h"

#include <algorithm>
#include <utility>

bool UserManager::addUser(std::string PESEL, std::string firstName, std::string lastName, std::string address) {
    if (!validatePESEL(PESEL)) {return false;}
    this->users.push_back(new User(std::move(firstName), std::move(lastName), std::move(PESEL), std::move(address)));
    return true;
}

bool UserManager::removeUser(const std::string& PESEL) {
    if (!validatePESEL(PESEL)) {return false;}

    User* target = findUser(PESEL);
    if (target == nullptr) {return false;}

    std::erase(users, target);
    return true;
}

User *UserManager::findUser(const std::string &PESEL) const {
    for (User* user : this->users) {
        if (user->getPESEL() == PESEL) {
            return user;
        }
    }
    return nullptr;
}

bool UserManager::validatePESEL(const std::string& PESEL) {
    if (PESEL.length() != 11) {return false;}
    for (char c : PESEL) {
        if (!isdigit(c)) {return false;}
    }
    return true;
}
