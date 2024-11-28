#pragma once
#include <string>
using std::string;
class Surgery
{
private:
    string SurgeryID;
    int Duration;
public:
    Surgery(string p_SurgeryID, int p_Duration);
    bool Equals(const Surgery& other);
    bool NotEquals(const Surgery& other);
    bool GreaterThan(const Surgery& other);
    bool GreaterThanEquals(const Surgery& other);
    bool LessThan(const Surgery& other);
    bool LessThanEquals(const Surgery& other);
};




#include "Surgery.h"

Surgery::Surgery(string p_SurgeryID, int p_Duration)
{
    SurgeryID = p_SurgeryID;
    Duration = p_Duration;
}

bool Surgery::Equals(const Surgery& other)
{
    return (Duration == other.Duration);
}

bool Surgery::NotEquals(const Surgery& other)
{
    return (Duration != other.Duration);
}

bool Surgery::GreaterThan(const Surgery& other)
{
    return (Duration > other.Duration);
}

bool Surgery::GreaterThanEquals(const Surgery& other)
{
    return (Duration >= other.Duration);
}

bool Surgery::LessThan(const Surgery& other)
{
    return (Duration < other.Duration);
}

bool Surgery::LessThanEquals(const Surgery& other)
{
    return (Duration <= other.Duration);
}






#include <iostream>
#include <string>
#include "Surgery.h"

using std::cout;
using std::endl;

int main()
{
    Surgery surgery1("S001", 90);
    Surgery surgery2("S002", 120);

    std::cout << std::boolalpha;

    cout << "Equals:" << surgery1.Equals(surgery2) << endl;
    cout << "Not equals:" << surgery1.NotEquals(surgery2) << endl;
    cout << "Greater than:" << surgery1.GreaterThan(surgery2) << endl;
    cout << "Greater than or equals:" << surgery1.GreaterThanEquals(surgery2) << endl;
    cout << "Less than:" << surgery1.LessThan(surgery2) << endl;
    cout << "Less than or equals:" << surgery1.LessThanEquals(surgery2) << endl;

    return 0;
}