//
// Created by Donut on 9.11.2026.
//

#ifndef ZAD_2_2_PASTRY_H
#define ZAD_2_2_PASTRY_H

#include <string>
#include "Color.h"


class Pastry {
public:
    [[nodiscard]] Pastry();

    [[nodiscard]] Pastry(const std::string &name, const std::string &flavour, double weight);

    [[nodiscard]] Pastry(const std::string &name, const std::string &flavour, const std::string &topping, double weight);

    [[nodiscard]] Pastry(const std::string &name, const std::string &flavour, const std::string &topping, double weight,
        Color coloring);

    [[nodiscard]] Pastry(const Pastry& source);

    [[nodiscard]] std::string getName() const;

    void setName(std::string name);

    [[nodiscard]] std::string getFlavour() const;

    void setFlavour(std::string flavour);

    [[nodiscard]] std::string getTopping() const;

    void setTopping(std::string topping);

    [[nodiscard]] double getWeight() const;

    void setWeight(double weight);

    [[nodiscard]] Color getColoring() const;

    void setColoring(Color color);

private:
    std::string name;
    std::string flavour;
    std::string topping;
    double weight{};
    Color coloring;

};
#endif //ZAD_2_2_PASTRY_H
