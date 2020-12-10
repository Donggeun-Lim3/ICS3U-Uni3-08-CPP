// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by Donggeun Lim
// Created on December 2020
// This program checks the year is leap year or no

#include <iostream>
#include <string>

int main() {
    const int leapYearFour = 4;
    const int leapYearHundred = 100;
    const int leapYearFourHundred = 400;
    std::string integerAsString;
    int integerAsNumber;
    int yearNumber;

    std::cout << "Enter the year : ";
    std::cin >> integerAsString;
    std::cout << "" << std::endl;

    try {
        yearNumber = std::stoi(integerAsString);


        if (yearNumber % leapYearFour == 0) {
            if (yearNumber % leapYearHundred == 0) {
                if (yearNumber % leapYearFourHundred == 0) {
                    std::cout << "This year is leap year";
                } else {
                    std::cout << "This year is not a leap year";
                }
            } else {
                std::cout << "This year is a leap year";
            }
        } else {
            std::cout << "This year is not a leap year";
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not an integer";
    }
}
