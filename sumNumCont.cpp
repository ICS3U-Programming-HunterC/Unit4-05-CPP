// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: April 28, 2022
// This program asks the user for the number of numbers to add together.
// It then uses a while loop to ask the user for the number to add
// and If it is a whole number, add it to the current sum. Otherwise,
// don't and continue the loop then display the numbers added and the final sum

#include <iostream>
#include <string>


int main() {
    // declare variables
    std::string userInputString, userNumString;
    int userInput, userNum;
    // initialize loop counter and sum
    std::string sumEquation = "";
    int sum = 0;
    int counter = 0;

    std::cout << "How many numbers would you like added?: ";
    std::cin >> userInputString;
    std::cout << "\n";

    try {
        // cast the input to an int, if it is not a number then it will end
        userInput = std::stoi(userInputString);

        if (userInput < 0) {
            // if the number is negative then it will end the program
            std::cout << "Your number cannot be negative!\n";

        } else {
            // get the numbers the user would like added
            do {
                std::cout << "What number would you like added?: ";
                std::cin >> userNumString;
                try {
                    userNum = std::stoi(userNumString);
                    // if the number is greater than 0 then add to the total
                    if (userNum > 0) {
                        counter = counter + 1;
                        std::cout << userNum << " added to score\n";
                        sum += userNum;
                    // if the user input is negative it will not be added
                    } else {
                        std::cout << "Number cannot be <= 0 so "
    "it was not added!\n";
                        continue;
                    }
                // if the number is invalid it will not be added
                } catch  (std::invalid_argument) {
                    std::cout << "Number has to be a whole number, "
    "so it was not added to the total \n";
                    continue;
            }
            } while (counter < userInput);
                std::cout << "sum = " << sum;
        }
    } catch (std::invalid_argument) {
            std::cout << "That is not a number!! Try again! \n";
}
}
