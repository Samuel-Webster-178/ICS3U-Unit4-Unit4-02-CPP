// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates perimeter and area of a rectangle
//     with dimensions inputted from user

#include <iostream>
#include <string>

int main() {
    // I calculate the factorial
    std::string numberAsString;
    int numberAsInt;
    int i = 1;
    int sumNumber = 1;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> numberAsString;

    // process & output
    try {
        numberAsInt = std::stoi(numberAsString);
        if (numberAsInt == 0) {
            std::cout << "0! = 1." << std::endl;
        } else if (numberAsInt < 0) {
            std::cout << "undefined." << std::endl;
        } else {
            do {
                sumNumber = sumNumber * i;
                i += 1;
            } while (i <= numberAsInt);
            std::cout << "The sum is " << sumNumber << "." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
