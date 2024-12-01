#include <iostream>
#include <iomanip>
#include <string>
using std::string;

//"************"Doctor.h"************
class Doctor {
private:
    string DoctorID;
    int YearsOfExperience;

public:
    // Behaviours
    bool Equals(const Doctor& other);
    bool NotEquals(const Doctor& other);
    bool GreaterThan(const Doctor& other);
    bool GreaterThanEquals(const Doctor& other);
    bool LessThan(const Doctor& other);
    bool LessThanEquals(const Doctor& other);

    // Constructor
    Doctor(string p_DoctorID, int p_YearsOfExperience);
};

//"************"Main.cpp"************
int main() {
    Doctor doctors[] = { Doctor("D001", 5), Doctor("D002", 7) };

    std::cout << std::boolalpha;
    std::cout << "Equals: " << doctors[0].Equals(doctors[1]) << std::endl;
    std::cout << "NotEquals: " << doctors[0].NotEquals(doctors[1]) << std::endl;
    std::cout << "GreaterThan: " << doctors[0].GreaterThan(doctors[1]) << std::endl;
    std::cout << "GreaterThanEquals: " << doctors[0].GreaterThanEquals(doctors[1]) << std::endl;
    std::cout << "LessThan: " << doctors[0].LessThan(doctors[1]) << std::endl;
    std::cout << "LessThanEquals: " << doctors[0].LessThanEquals(doctors[1]) << std::endl;

    return 0;
}

//"************"Doctor.cpp"************
// Behaviours

bool Doctor::Equals(const Doctor& other) {
    return YearsOfExperience == other.YearsOfExperience;
}

bool Doctor::NotEquals(const Doctor& other) {
    return YearsOfExperience != other.YearsOfExperience;
}

bool Doctor::GreaterThan(const Doctor& other) {
    return YearsOfExperience > other.YearsOfExperience;
}

bool Doctor::GreaterThanEquals(const Doctor& other) {
    return YearsOfExperience >= other.YearsOfExperience;
}

bool Doctor::LessThan(const Doctor& other) {
    return YearsOfExperience < other.YearsOfExperience;
}

bool Doctor::LessThanEquals(const Doctor& other) {
    return YearsOfExperience <= other.YearsOfExperience;
}

// Constructor
Doctor::Doctor(string p_DoctorID, int p_YearsOfExperience) {
    DoctorID = p_DoctorID;
    YearsOfExperience = p_YearsOfExperience;
}
