#include "PatientAcc.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

int main(void) {
    PatientAccount patient;

    std::cout << std::setprecision(2) << std::fixed << std::endl;
    std::cout << "*** Patient Release Statement ***" << std::endl;

    patient.QueryPatient();
    patient.QueryWardAndRoom();
    patient.QuerySurgery();
    patient.QueryPharmacy();
    patient.GenBill();

    return 0;
}