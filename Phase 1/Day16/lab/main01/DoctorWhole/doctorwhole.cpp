#include <iostream>
#include <iomanip>
#include<string>
using std::string;
class Doctor
{
	private:
		string DoctorID;
	        int YearsOfExperience;
	public:
               bool Equals(const Doctor& other);
  	       bool NotEquals(const Doctor& other);
  	       bool GreaterThan(const Doctor& other);
   	       bool GreaterThanEquals(const Doctor& other);
       	       bool LessThan(const Doctor& other);
       	       bool LessThanEquals(const Doctor& other);
               //constructor
               Doctor(string p_DoctorID, int p_YearsOfExperience);
};

int main() {
    Doctor d1("D001", 5);
    Doctor d2("D002", 7);

    std::cout << std::boolalpha;
    std::cout << "Equals: " << d1.Equals(d2) << std::endl;         
    std::cout << "GreaterThan: " << d1.GreaterThan(d2) << std::endl; 
    std::cout << "LessThanEquals: " << d1.LessThanEquals(d2) << std::endl;

    return 0;
}


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
