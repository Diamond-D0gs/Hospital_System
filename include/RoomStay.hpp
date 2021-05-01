#include <vector>
#include <string>
#include <iostream>
#include "MiscStuff.hpp"

#ifndef ROOMSTAY_H
#define ROOMSTAY_H

class RoomStay {
    private:
        static std::vector<Service> rooms;
    protected: 
        // Variables
        double roomCPD = 0.0;
        double roomBill = 0.0;
        
        // Constructor - Protected due to only for inheritance use
        RoomStay(): roomCPD(0), roomBill(0) {}
        
        // Methods - Protected due to only for inheritance use
        void QueryRoomStay(int daysStayed);
};

#endif