//
// Created by Donut on 19.10.2026.
//

#ifndef ZAD_1_3_USERMANAGER_H
#define ZAD_1_3_USERMANAGER_H
#include <vector>

#include "User.h"


class UserManager {
public:
    bool addUser(std::string PESEL, std::string firstName, std::string lastName, std::string address);

    bool removeUser(const std::string& PESEL);

    void displayUsers();

private:
    [[nodiscard]] User *findUser(const std::string &PESEL) const;
    static bool validatePESEL(const std::string& PESEL);
    std::pmr::vector<User*> users;
};


#endif //ZAD_1_3_USERMANAGER_H
