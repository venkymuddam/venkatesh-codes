#pragma once
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
