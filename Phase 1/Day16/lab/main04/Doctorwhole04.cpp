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

    // Friend class for comparison functions
    friend class Comparisons;
};

// Constructor definition
Doctor::Doctor(string p_DoctorID, int p_YearsOfExperience) {
    DoctorID = p_DoctorID;
    YearsOfExperience = p_YearsOfExperience;
}

// Comparisons class declaration
class Comparisons {
public:
    // Static comparison functions
    static bool Equals(const Doctor& first, const Doctor& second);
    static bool NotEquals(const Doctor& first, const Doctor& second);
    static bool GreaterThan(const Doctor& first, const Doctor& second);
    static bool GreaterThanEquals(const Doctor& first, const Doctor& second);
    static bool LessThan(const Doctor& first, const Doctor& second);
    static bool LessThanEquals(const Doctor& first, const Doctor& second);
};

// Static function definitions
bool Comparisons::Equals(const Doctor& first, const Doctor& second) {
    return first.YearsOfExperience == second.YearsOfExperience;
}

bool Comparisons::NotEquals(const Doctor& first, const Doctor& second) {
    return first.YearsOfExperience != second.YearsOfExperience;
}

bool Comparisons::GreaterThan(const Doctor& first, const Doctor& second) {
    return first.YearsOfExperience > second.YearsOfExperience;
}

bool Comparisons::GreaterThanEquals(const Doctor& first, const Doctor& second) {
    return first.YearsOfExperience >= second.YearsOfExperience;
}

bool Comparisons::LessThan(const Doctor& first, const Doctor& second) {
    return first.YearsOfExperience < second.YearsOfExperience;
}

bool Comparisons::LessThanEquals(const Doctor& first, const Doctor& second) {
    return first.YearsOfExperience <= second.YearsOfExperience;
}

// Main function
int main() {
    Doctor d1("D001", 5);
    Doctor d2("D002", 7);

    std::cout << std::boolalpha;
    std::cout << "Equals: " << Comparisons::Equals(d1, d2) << std::endl;
    std::cout << "NotEquals: " << Comparisons::NotEquals(d1, d2) << std::endl;
    std::cout << "GreaterThan: " << Comparisons::GreaterThan(d1, d2) << std::endl;
    std::cout << "GreaterThanEquals: " << Comparisons::GreaterThanEquals(d1, d2) << std::endl;
    std::cout << "LessThan: " << Comparisons::LessThan(d1, d2) << std::endl;
    std::cout << "LessThanEquals: " << Comparisons::LessThanEquals(d1, d2) << std::endl;

    return 0;
}
