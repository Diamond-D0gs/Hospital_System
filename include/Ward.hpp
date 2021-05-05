#include <vector>
#include <string>
#include <iostream>
#include "RoomStay.hpp"
#include "MiscStuff.hpp"

#ifndef WARD_H
#define WARD_H

class Ward {
    private:
        static std::vector<Service> wards;
    protected:
        double wardCPD;
        double wardBill;

        // Constructor - Protected due to only for inheritance use
        Ward(): wardCPD(0), wardBill(0) {}

        // Methods - Protected due to only for inheritance use
        void QueryWard(int daysStayed);
        // void QueryWardAndRoom(int daysStayed);
};

#endif