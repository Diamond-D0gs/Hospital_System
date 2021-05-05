#include <vector>
#include <string>
#include <iostream>
#include "Ward.hpp"
#include "RoomStay.hpp"
#include "MiscStuff.hpp"

#ifndef VISIT_H
#define VISIT_H

class Visit: public Ward, public RoomStay {
    private:
        static std::vector<Service> outpatient;
    protected:
        int daysStayed;
        double visitBill; 

        // Constructor - Protected due to only for inheritance use
        Visit(): daysStayed(0), visitBill(0) {}

    public:
        void QueryVisit();
};

#endif