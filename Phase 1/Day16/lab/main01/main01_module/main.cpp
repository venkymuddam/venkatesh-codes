#include <iostream>
#include <iomanip>

#include "Doctors.h"
int main() {
    Doctor d1("D001", 5);
    Doctor d2("D002", 7);

    std::cout << std::boolalpha;
    std::cout << "Equals: " << d1.Equals(d2) << std::endl; 
    std::cout << "NotEquals: " << d1.NotEquals(d2) << std::endl;        
    std::cout << "GreaterThan: " << d1.GreaterThan(d2) << std::endl; 
    std::cout << "GreaterThanEquals: " << d1.GreaterThanEquals(d2) << std::endl; 
    std::cout << "LessThan: " << d1.LessThan(d2) << std::endl;
    std::cout << "LessThanEquals: " << d1.LessThanEquals(d2) << std::endl;

    return 0;
}


  	     
   	      
       	   
