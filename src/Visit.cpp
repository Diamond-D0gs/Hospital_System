#include "Visit.hpp"

std::vector<Service> Visit::outpatient {
    {"Outpatient A", 50.0}
};

void Visit::QueryVisit() {
    char userInput;
    int userSelect = 0;

    std::cout << std::endl;
    userInput = toupper(ValidateUserCharInput("Was this an outpatient visit? [Y,N]: ", "Error, Invalid selection. Please try again.", {'N','Y', 'n', 'y'}));

    if (userInput == 'Y') {
        userSelect = ServiceMenuUserSelect(outpatient);
        visitBill = outpatient.at(userSelect-1).cost;
    }
    else {
        std::cout << std::endl;
        daysStayed = ValidateUserInputRange<int>("How many days was the patient at the hospital: ", "Error! Please enter a positive value within range.", 1, 65535);
        QueryWard(daysStayed);

        if (daysStayed > 1) {
            QueryRoomStay(daysStayed);
        }

        visitBill = wardBill + roomBill;
    }
}