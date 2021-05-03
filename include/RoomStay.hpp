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
        double roomCPD;
        double roomBill;
        
        // Constructor - Protected due to only for inheritance use
        RoomStay(): roomCPD(0), roomBill(0) {}
        
        // Methods - Protected due to only for inheritance use
        void QueryRoomStay(int daysStayed);
};

#endif