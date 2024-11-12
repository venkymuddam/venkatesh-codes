#include<iostream>
using namespace std;
#define MAX_SIZE 1000
#include<cstdlib>


void readTemperature(int temperatures[],int& size)
{
       int i=0; //for iteration
       int currentTemperature=0;
       do
        {
            
         cout << "enter the patient's temperature " << (i+1) << ": ";
         cin >> currentTemperature;
            if (currentTemperature!=0)
            {    ++size;
                temperatures[i] = currentTemperature;
                ++i;
            }
                
        }
          while(currentTemperature!=0); 
          
        
 
}  
int findTemperatureSum(int temperatures[] , int size )
{
    int sum = 0;
    for (int i=0; i < size; i++)
    {
        sum += temperatures[i];
    }
    return sum;
}

int findTemperatureAverage(int temperatureSum , int size)
{
    return (temperatureSum/size);
}


bool isOddTemperature(int number) 
{
    if (number % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int findSumOfOddTemperature(int temperatures[] , int size)
{
    int oddSum = 0;
    int number;
    
    for (int i = 0; i <= size-1; i++)
    {    
        number = temperatures[i];
        if (isOddTemperature(number))
        {
            oddSum = (oddSum + number);
        }
    }
    
    return oddSum;
}



int findMinntemperature(int temperatures[],int size)
{
    int minTemp = MAX_SIZE;
    for(int i =0;i<size;i++)
    {
         if(temperatures[i] < minTemp)
        {
            minTemp = temperatures[i];
        }
    }
    return minTemp;
}



void Test()
{
    int temperatures[MAX_SIZE];
    int size = 0;

    readTemperature(temperatures , size);
    int temperatureSum     = findTemperatureSum(temperatures , size);
    int averageTemperature = findTemperatureAverage(temperatureSum , size);
    int sumOfOddTemperature = findSumOfOddTemperature(temperatures , size);
    int minimumTemperature = findMinntemperature(temperatures , size);



    cout << "The Average Temperature is: " << averageTemperature << endl;
    cout << "Minimum Temperature is: " << minimumTemperature << endl;
    cout << "Sum of Odd Temperatures is: " << sumOfOddTemperature << endl;
    
}



int main()
{
    Test();
    return EXIT_SUCCESS;
}
