#include "Pharmacy.hpp"

std::vector<Service> Pharmacy::meds {
    {"Asprin", 10},
    {"Sleeping pills", 20},
    {"Pain pills", 50},
    {"Local anesthetic", 75},
    {"General anesthetic", 300}
};

// Query the user for their pharma details
void Pharmacy::QueryPharmacy() {
    char userInput;
    int userSelect = 0;

    // Query if the user had received any medication
    std::cout << std::endl;
    userInput = toupper(ValidateUserCharInput("Did the patient receive any medication (Y/N)? ", "Error, Invalid selection. Please try again", {'N','Y', 'n', 'y'}));
    while (userInput == 'Y') {
        userSelect = 0;

        // Loop over the medicine vector and print out its contents
        std::cout << std::endl;
        for (int i = 0; i < meds.size(); ++i) {
            std::cout << (i+1) << " - " << meds.at(i).name << " $ " << meds.at(i).cost << std::endl;
        }

        // Validate the user's input by checking that is within range of the medicine vector's size
        std::cout << std::endl;
        userSelect = ValidateUserInputRange<int>("Please enter your selection: ", "Error, Invalid selection. Please try again", 1, meds.size());

        // Add user's selection to the bill
        medBill += meds.at(userSelect-1).cost;

        // Query if the user had any additional medicine, loop will break if not.
        std::cout << std::endl;
        userInput = toupper(ValidateUserCharInput("Did the patient receive additional medication (Y/N)? ", "Error, Invalid selection. Please try again", {'N','Y', 'n', 'y'}));
    }
}

