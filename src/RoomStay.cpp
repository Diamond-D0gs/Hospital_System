#include "RoomStay.hpp"

std::vector<Service> RoomStay::rooms {
    {"Shared Room", 50.0},
    {"Basic Room ", 100.0},
    {"Deluxe Room", 200.0},
    {"King Room  ", 400.0}
};

// Query the user's stay details
void RoomStay::QueryRoomStay(int daysStayed) {
    int userSelect = 0;

    // Loop over the room vector
    std::cout << std::endl;
    for (int i = 0; i < rooms.size(); ++i) {
        std::cout << (i+1) << " - " << rooms.at(i).name << " $ " << rooms.at(i).cost << std::endl;
    }

    // Validate the user's input by checking that is within range of the room vector's size
    std::cout << std::endl;
    userSelect = ValidateUserInputRange<int>("Please enter your selection: ", "Error, Invalid selection. Please try again", 1, rooms.size());

    // Set the daily cost according to the user's selection
    roomCPD = rooms.at(userSelect-1).cost;

    // Room bill is the product of the daily cost and the days stayed
    roomBill = roomCPD * daysStayed;
}



