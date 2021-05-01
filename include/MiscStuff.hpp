#include <string>
#include <vector>
#include <iostream>
#include <limits>

#ifndef MISCSTUFF_H
#define MISCSTUFF_H

struct Service {
    std::string name;
    float cost;
};

char ValidateUserCharInput(std::string prompt, std::string error, std::vector<char> checks);

template <typename T>
T ValidateUserInputRange(std::string prompt, std::string error, T lower, T upper) {
    bool valid = false;
    T userInput;
    
    do {
        std::cout << prompt;
        std::cin >> userInput;
        while (std::cin.fail() == 1) { // Keep repeating until a valid input is detected
            std::cin.clear(); // Reset cin state flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear cin buffer
            std::cout << error << std::endl;
            std::cout << prompt;
            std::cin >> userInput;
        }
        
        // Checks to make sure user input is within range
        if ((userInput >= lower) && (userInput <= upper)) {
            valid = true;
        }
        else { // Print an error if user input is out of range
            std::cout << error << std::endl;
        }
    } while(valid == false);

    return userInput;
}

#endif
