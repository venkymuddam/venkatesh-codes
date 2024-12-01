#include <iostream>
#include <iomanip>
#include <string>
using std::string;

// Doctor class declaration
class Doctor {
private:
    string DoctorID;
    int YearsOfExperience;

public:
    // Constructor
    Doctor(string p_DoctorID, int p_YearsOfExperience);

    // Friends (non-member functions)
    friend bool Equals(const Doctor& first, const Doctor& second);
    friend bool NotEquals(const Doctor& first, const Doctor& second);
    friend bool GreaterThan(const Doctor& first, const Doctor& second);
    friend bool GreaterThanEquals(const Doctor& first, const Doctor& second);
    friend bool LessThan(const Doctor& first, const Doctor& second);
    friend bool LessThanEquals(const Doctor& first, const Doctor& second);
};

// Constructor definition
Doctor::Doctor(string p_DoctorID, int p_YearsOfExperience) {
    DoctorID = p_DoctorID;
    YearsOfExperience = p_YearsOfExperience;
}
// Non-member function definitions
bool Equals(const Doctor& first, const Doctor& second) {
    return first.YearsOfExperience == second.YearsOfExperience;
}

bool NotEquals(const Doctor& first, const Doctor& second) {
    return first.YearsOfExperience != second.YearsOfExperience;
}

bool GreaterThan(const Doctor& first, const Doctor& second) {
    return first.YearsOfExperience > second.YearsOfExperience;
}

bool GreaterThanEquals(const Doctor& first, const Doctor& second) {
    return first.YearsOfExperience >= second.YearsOfExperience;
}

bool LessThan(const Doctor& first, const Doctor& second) {
    return first.YearsOfExperience < second.YearsOfExperience;
}

bool LessThanEquals(const Doctor& first, const Doctor& second) {
    return first.YearsOfExperience <= second.YearsOfExperience;
}

// Main function
int main() {
    Doctor d1("D001", 5);
    Doctor d2("D002", 7);

    std::cout << std::boolalpha;
    std::cout << "Equals: " << Equals(d1, d2) << std::endl;
    std::cout << "NotEquals: " << NotEquals(d1, d2) << std::endl;
    std::cout << "GreaterThan: " << GreaterThan(d1, d2) << std::endl;
    std::cout << "GreaterThanEquals: " << GreaterThanEquals(d1, d2) << std::endl;
    std::cout << "LessThan: " << LessThan(d1, d2) << std::endl;
    std::cout << "LessThanEquals: " << LessThanEquals(d1, d2) << std::endl;

    return 0;
}
