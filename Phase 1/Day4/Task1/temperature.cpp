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
          
        }
 
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




void Test()
{
    int temperatures[MAX_SIZE];
    int size = 0;

    readTemperature(temperatures , size);
    int temperatureSum =findTemperatureSum(temperatures , size);
    int averageTemperature=findTemperatureAverage(temperatureSum , size);
    
    



    cout << "The Average Temperature is: " << averageTemperature << endl;

    
}



int main()
{
    Test();
    return EXIT_SUCCESS;
}
