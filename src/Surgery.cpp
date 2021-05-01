#include "Surgery.hpp"

std::vector<Service> Surgery::surgs {
    {"Minor surgery", 600},
    {"Eye surgery", 1250},
    {"Knee replacement", 6000},
    {"Heart surgery", 12000},
    {"Brain surgery", 28000}
};

// Query the users for their surgery details
void Surgery::QuerySurgery() {
    char userInput;
    int userSelect = 0;

    // Query if the user had gotten any surgery
    std::cout << std::endl;
    userInput = toupper(ValidateUserCharInput("Did the patient have surgery (Y/N)? ", "Error, Invalid selection. Please try again.", {'N','Y', 'n', 'y'}));
    while (userInput == 'Y') { // if the user had gotten surgery, enter the loop.
        userSelect = 0;

        // Loop over the surgery vector and print out its contents
        std::cout << std::endl;
        for (int i = 0; i < surgs.size(); ++i) {
            std::cout << (i+1) << " - " << surgs.at(i).name << " $ " << surgs.at(i).cost << std::endl;
        }

        // Validate the user's input by checking that is within range of the surgery vector's size
        std::cout << std::endl;
        userSelect = ValidateUserInputRange<int>("Please enter your selection: ", "Error, Invalid selection. Please try again", 1, surgs.size());

        // Add user's selection to the bill
        surgBill += surgs.at(userSelect-1).cost;

        // Query if the user had any additional surgery, loop will break if not.
        std::cout << std::endl;
        userInput = toupper(ValidateUserCharInput("Did the patient have additional surgery (Y/N)? ", "Error, Invalid selection. Please try again.", {'N','Y', 'n', 'y'}));
    }
}
