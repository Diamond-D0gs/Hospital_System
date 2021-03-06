#include "PatientAcc.hpp"

// Query the patient for information
void PatientAccount::QueryPatient() {
    std::cout << std::endl;

    std::string n = " ";
    std::cout << "Please enter the patient's name: ";
    getline(std::cin, n);
    while (n.size() < 1) {
        std::cout << "Please enter the patient's name: ";
        getline(std::cin, n);
    }
    n.at(0) = toupper(n.at(0)); // Capitalize the first letter just in case.
    name = n;

    age = ValidateUserInputRange<int>("Please enter the patient's age [0-120]: ", "Please enter a valid age", 0, 120);
    sex = toupper(ValidateUserCharInput("Please enter the patient's sex [M,F,O]: ", "Please enter a valid selection", {'M', 'F', 'O', 'm', 'f', 'o'}));
}

// Generate the patient's bill
void PatientAccount::GenBill() {
    // The total is the sum of the visit bill, medicine bill, surgery bill.
    double total = visitBill + surgBill + wardBill;

    std::cout << std::endl;
    std::cout << "Patient Information: " << std::endl;

    // Print patient information
    std::cout << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age:  " << age << std::endl;
    std::cout << "Sex:  " << sex << std::endl;

    std::cout << std::endl;
    std::cout << "Patient Invoice: " << std::endl;

    // Print invoice details    
    std::cout << std::endl;
    if (daysStayed == 0) {
        std::cout << "Outpatient charge: $" << visitBill << std::endl;
    }
    else if (daysStayed > 1) { // If the patient stayed overnight print the daily fees, and room charges
        std::cout << "Ward charge: " << daysStayed << " days @ S" << wardCPD << " = $ " << wardBill << std::endl;
        std::cout << "Room charge: " << daysStayed << " days @ $" << roomCPD << " = $ " << roomBill << std::endl;
    }
    else { // Else just print the lone ward charge
        std::cout << "Ward charge: " << wardBill << std::endl;
    }
    
    if (surgBill > 0.0) { // Print surgery charge if there are any
      std::cout << "Surgery charge: $ " << surgBill << std::endl;
    }

    if (medBill > 0.0) { // Print pharmacy charge if there are any
      std::cout << "Pharmacy charge: $ " << medBill << std::endl;
    }

    // Print total charges
    std::cout << std::endl;
    std::cout << "Total charges: $ " << total << std::endl;
}