#include "Ward.hpp"

std::vector<Service> Ward::wards {
    {"Ward A", 100.0},
    {"Ward B", 200.0},
    {"Ward C", 150.50},
    {"Ward D", 275.75}
};

void Ward::QueryWard(int daysStayed) {
    int userSelect = 0;

    std::cout << std::endl;
    std::cout << "What ward was the patient treated in?" << std::endl;

    userSelect = ServiceMenuUserSelect(wards);

    // Add user's selection to the bill
    wardCPD = wards.at(userSelect-1).cost;

    // Charge daily ward fee times days stayed
    wardBill = wardCPD * daysStayed; 
}

/*
void Ward::QueryWardAndRoom(int daysStayed) {
    int userSelect = 0;

    std::cout << std::endl;
    std::cout << "What ward was the patient treated in?" << std::endl;

    // Loop over the surgery vector and print out its contents
    std::cout << std::endl;
    for (int i = 0; i < wards.size(); ++i) {
        std::cout << (i+1) << " - " << wards.at(i).name << " $ " << wards.at(i).cost << std::endl;
    }

    // Validate the user's input by checking that is within range of the surgery vector's size
    std::cout << std::endl;
    userSelect = ValidateUserInputRange<int>("Please enter your selection: ", "Error, Invalid selection. Please try again", 1, wards.size());

    // Add user's selection to the bill
    wardCPD = wards.at(userSelect-1).cost;

    // Set days stayed according to the user's input, validate that it is within a reasonable range
    std::cout << std::endl;
    daysStayed = ValidateUserInputRange<int>("How many days was the patient at the hospital? ", "Error! Please enter a positive value within range.", 1, 65535);

    if (daysStayed > 1) {
        wardBill = wardCPD * daysStayed; // Charge daily ward fee times days stayed
        QueryRoomStay(daysStayed); // Query for room info
    }
    else {
        wardBill = wardCPD; // Charge for single day visit
    }
}
*/