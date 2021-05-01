#include "MiscStuff.hpp"

// Takes user input and checks against a vector of chars for validity, returns a char if valid.
char ValidateUserCharInput(std::string prompt, std::string error, std::vector<char> checks) {
    bool valid = false;
    std::string userInput; // A string is used due to it's flexibility with iostream
    
    do {
        std::cin.clear(); // Reset cin state flags
        std::cin.sync(); // Clear cin buffer
        std::cout << prompt;
        std::cin >> userInput;

        // Debugging outputs
        //std::cout << userInput << std::endl;
        //std::cout << userInput.size() << std::endl;

        // Check to make sure the cin has not failed and that the user's Input isn't larger than one character
        if (std::cin.fail() == 0 && userInput.size() == 1) {
            for (int i = 0; i < checks.size(); ++i) {
                if (userInput.at(0) == checks.at(i)) { // The first char is plucked from the string and tested against the char input vector
                    valid = true; // If a match is found, the valid flag is set to true and the for loop is broken out of
                    break;
                }
            }
        } 

        // Display the error message if the valid flag is still false
        if (valid == false) {
            std::cout << error << std::endl;
        }
    } while(valid == false);

    // Return the first char from the userInput string
    return userInput.at(0);
}
