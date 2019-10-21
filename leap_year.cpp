// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Christina Ngwa
// Created on: October 2019
// This program uses a nested if statement

#include <iostream>
#include <string>

main() {
    // this function uses a nested if statement
    int year;

    // output
    std::cout << "Is the year a leap year? Find out.\n";
    std::cout << "" << std::endl;
    std::cout << "Enter a year: "; std::cin >> year;
    std::cout << "" << std::endl;

    // process & output
    if (year % 4 == 0) {
        if (year % 100 == 0) {
                if (year % 400 == 0) {
                    std::cout << "It is a leap year.";
                } else {
                    std::cout << "It is not a leap year.";
                }
        } else {
            std::cout << "It is not a leap year.";
        }
    } else {
        std::cout << "It is not a leap year.";
    }
}
