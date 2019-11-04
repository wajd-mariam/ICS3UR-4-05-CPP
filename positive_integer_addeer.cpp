// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on: November 2019
// This program adds all positive integers together

#include <iostream>

main() {
    // variables
    int answer = 0;
    int counter = 0;
    int positive_integer = 0;
    int loop_number;

    // input
    std::cout << "Enter the number of integers you want to add: ";
    std::cin >> loop_number;

    // loop & process & output
    while (counter < loop_number) {
        std::cout << "Enter a number: ";
        std::cin >> positive_integer;
        counter = counter + 1;
        if (positive_integer < 0) {
            continue;
        } else {
            answer = answer + positive_integer;
        }
    }
    std::cout << "The sum of all positive integers is " << answer << std::endl;
}
