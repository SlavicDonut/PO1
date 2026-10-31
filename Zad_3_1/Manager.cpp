//
// Created by Donut on 28.10.2026.
//

#include "Manager.h"

#include <format>
#include <iostream>
#include <utility>

Manager::Manager(std::string firstName, std::string lastName, std::string nip, std::string department, Date hireDate,
                 double salary, int subordinateCount, std::string managerType, double functionBonus): Worker(
                                                                                                          std::move(firstName), std::move(lastName), std::move(nip), std::move(department), hireDate,
                                                                                                          salary),
                                                                                                      subordinateCount(subordinateCount),
                                                                                                      managerType(std::move(managerType)),
                                                                                                      functionBonus(functionBonus) {
}

void Manager::displayWorkerInfo() {
    std::cout << std::format("{} {}\n"
                         "{} manager of Department of {}\n"
                         "Subordinate Count: {}\n"
                         "NIP: {}\n"
                         "Salary: {} with function bonus of: {:.0f}%\n"
                         "Hire Date: {}\n",
                         firstName,
                         lastName,
                         managerType,
                         department,
                         subordinateCount,
                         NIP,
                         salary,
                         functionBonus * 100,
                         hireDate.getDate()) << std::endl;
}

Worker Manager::hireNewWorker(std::string firstName, std::string lastName, std::string nip, std::string department,
    Date hireDate, double salary) {

    subordinateCount++;

    return Worker(std::move(firstName), std::move(lastName), std::move(nip), std::move(department), hireDate, salary);
}

