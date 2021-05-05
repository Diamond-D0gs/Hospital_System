#include <vector>
#include <string>
#include <iostream>
#include "MiscStuff.hpp"
#include "Visit.hpp"
#include "Surgery.hpp"
#include "Pharmacy.hpp"

#ifndef PATIENTACC_H
#define PATIENTACC_H

class PatientAccount: public Visit, public Surgery, public Pharmacy {
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