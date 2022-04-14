// Copyright (c) 2022 Dahrio Francois All rights reserved
//
// Created by: Dahrio Francois
// Created on: April 2022
// This program takes three integers
//      and shows you which is the greater one

#include <iostream>


int main() {
    // this program shows which is the greater integer
    int integer1;
    int integer2;
    int integer3;

    // input
    std::cout << "Enter in your first integer: ";
    std::cin >> integer1;

    std::cout << "\nEnter in your second integer: ";
    std::cin >> integer2;

    std::cout << "\nEnter in your third integer: ";
    std::cin >> integer3;

    // process & output
    if (integer1 > integer2 && integer3) {
        std::cout << "\nThe greatest integer was " << integer1 << std::endl;
    } else if (integer2 > integer1 && integer3) {
        std::cout << "\nThe greatest integer was " << integer2 << std::endl;
    } else if (integer3 > integer1 && integer2) {
        std::cout << "\nThe greatest integer was " << integer3 << std::endl;
    } else {
        std::cout << "\nThere is no greater integer." << std::endl;
    }
}
