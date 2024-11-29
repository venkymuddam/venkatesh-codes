//we add one more function for finding the second max from the numberofdays attribute.
//we added the function as a friend to the Hospitalstay class



#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using std::string;

// "************"HospitalStay.h"************
class HospitalStay {
private:
    string StayID;
    int NumberOfDays;
public:
    // Behaviors
    bool LessThan(const HospitalStay& other) const;
    friend int SecondMax(const HospitalStay stays[], int size);

    // Constructor
    HospitalStay(string p_StayID, int p_NumberOfDays);
};

// "************"Main.cpp"************
int main() {
    HospitalStay stays[] = { HospitalStay("HS001", 5), 
                             HospitalStay("HS002", 4),
                             HospitalStay("HS003", 8), 
                             HospitalStay("HS004", 11),
                             HospitalStay("HS005", 2) };

    std::cout << std::boolalpha;
    for (int i = 0; i < 4; i++) {
        std::cout << "LessThan: " << stays[i].LessThan(stays[i + 1]) << std::endl;
    }

    std::cout << "SecondMax: " << SecondMax(stays, 5) << std::endl;
    return 0;
}

// ************"HospitalStay.cpp"************
// Behaviors
bool HospitalStay::LessThan(const HospitalStay& other) const {
    return (NumberOfDays < other.NumberOfDays);
}

// Friend Function to Find Second Maximum
int SecondMax(const HospitalStay stays[], int size) {
    int firstmax = INT_MIN;
    int secondmax = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (stays[i].NumberOfDays > firstmax) {
            secondmax = firstmax;
            firstmax = stays[i].NumberOfDays;
        } else if (stays[i].NumberOfDays > secondmax && stays[i].NumberOfDays < firstmax) {
            secondmax = stays[i].NumberOfDays;
        }
    }

    return secondmax;
}

// or

// int SecondMax(const HospitalStay stays[], int size) {
//     int firstmaxIndex = -1; // Index of the first max
//     int secondmaxIndex = -1; // Index of the second max

//     for (int i = 0; i < size; i++) {
//         if (firstmaxIndex == -1 || stays[firstmaxIndex].LessThan(stays[i])) {
//             secondmaxIndex = firstmaxIndex; // Update second max to previous first max
//             firstmaxIndex = i; // Update first max to the current element
//         } else if (secondmaxIndex == -1 || stays[secondmaxIndex].LessThan(stays[i]) && !stays[firstmaxIndex].LessThan(stays[i])) {
//             secondmaxIndex = i; // Update second max if it is less than the current and not equal to first max
//         }
//     }

//     return secondmaxIndex == -1 ? INT_MIN : stays[secondmaxIndex].NumberOfDays; // Return second max value
// }




// Constructor
HospitalStay::HospitalStay(string p_StayID, int p_NumberOfDays) {
    StayID = p_StayID;
    NumberOfDays = p_NumberOfDays;
}
