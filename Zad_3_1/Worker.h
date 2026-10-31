//
// Created by Donut on 28.10.2026.
//

#ifndef ZAD_3_1_WORKER_H
#define ZAD_3_1_WORKER_H
#include <string>

#include "Date.h"


class Worker {
public:
    virtual ~Worker() = default;

    [[nodiscard]] Worker(std::string firstName, std::string lastName, std::string nip, std::string department,
                         Date hireDate, double salary);

    void virtual displayWorkerInfo();

protected:
    std::string firstName;
    std::string lastName;
    std::string NIP;
    std::string department;
    Date hireDate;
    double salary = 0.0;
};


#endif //ZAD_3_1_WORKER_H
