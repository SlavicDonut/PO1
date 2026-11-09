#include <iostream>

#include "Pastry.h"

int main() {

    Pastry pastry1 = Pastry();
    Pastry pastry2 = Pastry("cupcake", "vanilla", 10);
    Pastry pastry3 = Pastry("cheesecake", "chocolate", "chocolate icing", 200);
    Pastry pastry4 = Pastry("brownie", "chocolate", "chocolate chips", 100, Color::BLUE);

    Pastry pastry5 = Pastry(pastry1);

    return 0;
}
