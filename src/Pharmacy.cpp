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

        userSelect = ServiceMenuUserSelect(meds);

        // Add user's selection to the bill
        medBill += meds.at(userSelect-1).cost;

        // Query if the user had any additional medicine, loop will break if not.
        std::cout << std::endl;
        userInput = toupper(ValidateUserCharInput("Did the patient receive additional medication (Y/N)? ", "Error, Invalid selection. Please try again", {'N','Y', 'n', 'y'}));
    }
}

