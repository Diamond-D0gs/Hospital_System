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

    userSelect = ServiceMenuUserSelect(rooms);

    // Set the daily cost according to the user's selection
    roomCPD = rooms.at(userSelect-1).cost;

    // Room bill is the product of the daily cost and the days stayed
    roomBill = roomCPD * daysStayed;
}



