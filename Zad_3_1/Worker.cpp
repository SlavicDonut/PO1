//
// Created by Donut on 28.10.2026.
//

#include "Worker.h"

#include <format>
#include <iostream>

Worker::Worker(std::string firstName, std::string lastName, std::string nip, std::string department, Date hireDate,
               double salary):
        firstName(std::move(firstName)),
        lastName(std::move(lastName)),
        NIP(std::move(nip)),
        department(std::move(department)),
        hireDate(hireDate),
        salary(salary) {}

void Worker::displayWorkerInfo() {
    std::cout << std::format("{} {}\n"
                             "NIP: {}\n"
                             "Department: {}\n"
                             "Salary: {}\n"
                             "Hire Date: {}\n",
                             firstName,
                             lastName,
                             NIP,
                             department,
                             salary,
                             hireDate.getDate()) << std::endl;
}
