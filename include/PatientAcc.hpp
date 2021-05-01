#include <vector>
#include <string>
#include <iostream>
#include "MiscStuff.hpp"
#include "Surgery.hpp"
#include "Pharmacy.hpp"
#include "Ward.hpp"

#ifndef PATIENTACC_H
#define PATIENTACC_H

class PatientAccount: public Ward, public Surgery, public Pharmacy {
    private:
        std::string name;
        char sex;
        int age;
    
    public:
        // Contstructor
        PatientAccount(): name(" "), sex(' '), age(0) {}

        // Methods
        void QueryPatient();
        void GenBill();
};

#endif