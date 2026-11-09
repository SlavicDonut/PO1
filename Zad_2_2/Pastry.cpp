//
// Created by Donut on 9.11.2026.
//

#include "Pastry.h"

#include <format>
#include <iostream>
#include <stdexcept>

Pastry::Pastry() {
    setName("Wet goop");
    setFlavour("Nothing");
    setTopping("None");
    setWeight(0);
    setColoring(Color::NONE);

    std::cout << std::format("Default constructor called\n") << std::endl;
}

Pastry::Pastry(const std::string &name, const std::string &flavour, double weight) {
    setName(name);
    setFlavour(flavour);
    setTopping("None");
    setWeight(weight);
    setColoring(Color::NONE);

    std::cout << std::format("3-agrument constructor called:\n"
                             "1st arg type: string, value: {}\n"
                             "2nd arg type: string, value: {}\n"
                             "3rd arg type: double, value: {}\n",
                             getName() ,getFlavour(), getWeight()) << std::endl;
}

Pastry::Pastry(const std::string &name, const std::string &flavour, const std::string &topping, double weight) {
    setName(name);
    setFlavour(flavour);
    setTopping(topping);
    setWeight(weight);
    setColoring(Color::NONE);


    std::cout << std::format("4-agrument constructor called:\n"
                         "1st arg type: string, value: {}\n"
                         "2nd arg type: string, value: {}\n"
                         "3rd arg type: string, value: {}\n"
                         "4th arg type: double, value: {}\n",
                         getName() ,getFlavour(), getTopping(), getWeight()) << std::endl;
}

Pastry::Pastry(const std::string &name, const std::string &flavour, const std::string &topping, double weight, Color coloring) {
    setName(name);
    setFlavour(flavour);
    setTopping(topping);
    setWeight(weight);
    setColoring(coloring);


    std::cout << std::format("5-agrument constructor called:\n"
                     "1st arg type: string, value: {}\n"
                     "2nd arg type: string, value: {}\n"
                     "3rd arg type: string, value: {}\n"
                     "4th arg type: double, value: {}\n"
                     "5th arg type: enum,   value: {}\n",
                     getName() ,getFlavour(), getTopping(), getWeight(), static_cast<int>(getColoring())) << std::endl;
}

Pastry::Pastry(const Pastry &source) {
    setName(source.getName());
    setFlavour(source.getFlavour());
    setTopping(source.getTopping());
    setWeight(source.getWeight());
    setColoring(source.getColoring());

    std::cout << std::format("Copy constructor called\n") << std::endl;
}


std::string Pastry::getName() const {
    return name;
}

void Pastry::setName(std::string name) {
    this->name = std::move(name);
}

std::string Pastry::getFlavour() const {
    return flavour;
}

void Pastry::setFlavour(std::string flavour) {
    this->flavour = std::move(flavour);
}

std::string Pastry::getTopping() const {
    return topping;
}

void Pastry::setTopping(std::string topping) {
    this->topping = std::move(topping);
}

double Pastry::getWeight() const {
    return weight;
}

void Pastry::setWeight(double weight) {
    if (weight < 0) {throw std::invalid_argument("Negative weight");}
    this->weight = weight;
}

Color Pastry::getColoring() const {
    return coloring;
}

void Pastry::setColoring(Color color) {
    this->coloring = color;
}
