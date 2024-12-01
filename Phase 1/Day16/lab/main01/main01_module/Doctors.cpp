#include <string>

#include "Doctors.h"

using std::string;

//behaviours
bool Doctor::Equals(const Doctor& other)
{
    return (YearsOfExperience == other.YearsOfExperience);
}

bool Doctor::NotEquals(const Doctor& other)
{
    return (YearsOfExperience != other.YearsOfExperience);
}

bool Doctor::GreaterThan(const Doctor& other)
{
    return (YearsOfExperience > other.YearsOfExperience);
}

bool Doctor::GreaterThanEquals(const Doctor& other)
{
    return (YearsOfExperience >= other.YearsOfExperience);
}

bool Doctor::LessThan(const Doctor& other)
{
    return (YearsOfExperience < other.YearsOfExperience);
}

bool Doctor::LessThanEquals(const Doctor& other)
{
    return (YearsOfExperience <= other.YearsOfExperience);
}

//constructor
Doctor::Doctor(string p_DoctorID, int p_YearsOfExperience)
{
    DoctorID = p_DoctorID;
    YearsOfExperience = p_YearsOfExperience;
}
