#include<iostream>
using namespace std;
#define MAX_SIZE 1000
#include<cstdlib>



void readTemperature(int temperatures[],int& size)
{
       int i=0; //for iteration
       int currentTemperature=0;
       while(true)
        {
            
         cout << "enter the patient's temperature " << (i+1) << ": ";
         cin >> currentTemperature;
           if (currentTemperature!=0)
           {
                ++size;
                temperatures[i] = currentTemperature;
                ++i;
           }  
            else
            {
               break;
            } 
        }
 
}  


int isNumberMinimum3Digit( int temperatures[] , int size, int qualify[])
{
    int count = 0;
    for( int i = 0; i < size; i++)
    {
        if ( temperatures[i] >= 100 )
        {
            qualify[count] = temperatures[i];
            count++;
        }
    }
    return count;
}
            

int findMin3DigitSum( int qualify[], int count )
{   
    int sum = 0;
    for (int i = 0; i<count; i++)
    {
        sum += qualify[i];
    }
    return sum;
}



void Test()
{
    int temperatures[MAX_SIZE];
    int size = 0;
    readTemperature(temperatures , size);
       
    int qualify[MAX_SIZE];
    int count= isNumberMinimum3Digit(temperatures, size, qualify);
    int sum3Digit = findMin3DigitSum( qualify, count );
    cout << sum3Digit;   
    
    
}



int main()
{
    Test();
    return EXIT_SUCCESS;
}
