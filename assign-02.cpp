// Copyright (c) 2021 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Oct, 16, 2023
// This program will ask the user for the units and
// the a side then display volume and surface area of
// a tetrahedron

// for math library
#include <cmath>
// Include this for std::setprecision
#include <iomanip>
#include <iostream>
// Include this for std::string
#include <string>

int main() {
    // declare aSide and units variable
    float aSide;
    std::string units;

    // get the a side and display message
    std::cout << "This program will ask the user for the units and ";
    std::cout << "\nthe a side then display volume and surface area of";
    std::cout << "\na tetrahedron";
    std::cout << "\nEnter your a side of your tetrahedron: ";
    std::cin >> aSide;

    // get units from user
    std::cout << "\nEnter your units of your tetrahedron: ";
    std::cin >> units;

    // calculate surface area and volume
    float surfaceArea = std::sqrt(3) * std::pow(aSide, 2);
    float volume = std::pow(aSide, 3) / (6 * std::sqrt(2));

    // Error message
    if (aSide < 0) {
        std::cout << "\n";
        std::cout << "Please enter a valid number";
    }  else {
        // display the surface area and volume
        std::cout << "\n";
        std::cout << "The surface area is = " << std::fixed
        << std::setprecision(2) << surfaceArea << " " << units << "^2";
        std::cout << "\nThe volume is = "
        << std::fixed << std::setprecision(2) << volume << " " << units << "^3";
    }
}
