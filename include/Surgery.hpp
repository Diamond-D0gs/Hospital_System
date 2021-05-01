#include <vector>
#include <string>
#include <iostream>
#include "MiscStuff.hpp"

#ifndef SURGERY_H
#define SURGERY_H

class Surgery {
    private:
        static std::vector<Service> surgs;
    protected:
        double surgBill;
    
        // Constructor - Protected due to only for inheritance use
        Surgery(): surgBill(0) {}

    public:
        void QuerySurgery();
};

#endif

