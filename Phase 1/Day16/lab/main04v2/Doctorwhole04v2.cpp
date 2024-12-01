#include <iostream>
#include <string>

using std::string;

// Forward declaration of Comparisons class
class Comparisons;

// Doctor class declaration
class Doctor {
private:
    string DoctorID;
    int YearsOfExperience;

public:
    // Constructor
    Doctor(string p_DoctorID, int p_YearsOfExperience);

    // Friend class to allow access to private members
    friend Comparisons;
};

// Comparisons class declaration
class Comparisons {
public:
    bool Equals(const Doctor& first, const Doctor& second);
    bool NotEquals(const Doctor& first, const Doctor& second);
    bool GreaterThan(const Doctor& first, const Doctor& second);
    bool GreaterThanEquals(const Doctor& first, const Doctor& second);
    bool LessThan(const Doctor& first, const Doctor& second);
    bool LessThanEquals(const Doctor& first, const Doctor& second);
};

// Constructor definition for Doctor
Doctor::Doctor(string p_DoctorID, int p_YearsOfExperience) {
    DoctorID = p_DoctorID;
    YearsOfExperience = p_YearsOfExperience;
}

// Comparisons class method definitions
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

    Comparisons comparisons;

    std::cout << std::boolalpha;
    std::cout << "Equals: " << comparisons.Equals(d1, d2) << std::endl;
    std::cout << "NotEquals: " << comparisons.NotEquals(d1, d2) << std::endl;
    std::cout << "GreaterThan: " << comparisons.GreaterThan(d1, d2) << std::endl;
    std::cout << "GreaterThanEquals: " << comparisons.GreaterThanEquals(d1, d2) << std::endl;
    std::cout << "LessThan: " << comparisons.LessThan(d1, d2) << std::endl;
    std::cout << "LessThanEquals: " << comparisons.LessThanEquals(d1, d2) << std::endl;

    return 0;
}
