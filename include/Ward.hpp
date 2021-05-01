#include <vector>
#include <string>
#include <iostream>
#include "RoomStay.hpp"
#include "MiscStuff.hpp"

#ifndef WARD_H
#define WARD_H

class Ward: public RoomStay {
    private:
        static std::vector<Service> wards;
    protected:
        int daysStayed;
        double wardCPD;
        double wardBill;

        // Constructor - Protected due to only for inheritance use
        Ward(): daysStayed(0), wardCPD(0), wardBill(0) {}

    public:
        void QueryWardAndRoom();
};

#endif