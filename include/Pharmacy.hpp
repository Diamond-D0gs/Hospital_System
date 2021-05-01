#include <vector>
#include <string>
#include <iostream>
#include "MiscStuff.hpp"

#ifndef PHARMACY_H
#define PHARMACY_H

class Pharmacy {
    private:
        static std::vector<Service> meds;
    protected:
        double medBill;

        // Constructor - Protected due to only for inheritance use
        Pharmacy(): medBill(0) {}

    public:
        void QueryPharmacy();
};

#endif