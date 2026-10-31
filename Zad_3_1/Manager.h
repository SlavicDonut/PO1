//
// Created by Donut on 28.10.2026.
//

#ifndef ZAD_3_1_MANAGER_H
#define ZAD_3_1_MANAGER_H
#include "Worker.h"


class Manager : public Worker {

public:
    [[nodiscard]] Manager(std::string firstName, std::string lastName, std::string nip, std::string department,
        Date hireDate, double salary, int subordinateCount, std::string managerType, double functionBonus);

    void displayWorkerInfo() override;

    [[nodiscard]] Worker hireNewWorker(std::string firstName, std::string lastName, std::string nip, std::string department,
                         Date hireDate, double salary);

private:
    int subordinateCount = 0;
    std::string managerType;
    double functionBonus = 0.0;

};


#endif //ZAD_3_1_MANAGER_H
