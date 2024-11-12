#include<iostream>
using namespace std;
#define MAX_SIZE 1000
#include<cstdlib>
#include <climits>
#include <cmath>

//abel

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

//sreya

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

//sooraj

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







//athira

int find2ndMaxOddTemperature(int temperatures[], int size)

{
int maxOdd = INT_MIN, secondMaxOdd = INT_MIN;
     for(int i = 0;i < size; i++)
     {
          int number = temperatures[i];
          if(isOddTemperature(number))
          {

            if (temperatures[i]> maxOdd) 
            {
                secondMaxOdd = maxOdd;
                maxOdd = temperatures[i];
            } 
            else if (temperatures[i] > secondMaxOdd && temperatures[i] != maxOdd) 
            {
                secondMaxOdd = temperatures[i];
            }
          }
     }
     if (secondMaxOdd ==INT_MIN)
     {
         cout << " No second maximum odd temperature found " << endl;
         return -1;
     }
     return secondMaxOdd;
}



//minhaj

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

//venkatesh

bool isPrimeTemperture(int currentTemperature)
{
    if (currentTemperature <= 1)
    {
        return false;
    }
    
    for (int i = 2; i <= sqrt(currentTemperature); i++)
    {
        if (currentTemperature % i == 0)
        {
            return false;
        }
    }
    return true;
} 


// c++ code for find Prime Temperature Sum
int findPrimeTemperatureSum(int temperatures[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        int currentTemperature = temperatures[i];

        if (isPrimeTemperture(currentTemperature) == true)
        {
            sum += currentTemperature;
        }
    }

    return sum;
}


void Test()
{
    int temperatures[MAX_SIZE];
    int size = 0;
    int qualify[MAX_SIZE];

    readTemperature(temperatures , size);
    int temperatureSum     = findTemperatureSum(temperatures , size);
    int averageTemperature = findTemperatureAverage(temperatureSum , size);
    int sumOfOddTemperature = findSumOfOddTemperature(temperatures , size);
    int count= isNumberMinimum3Digit(temperatures, size, qualify);
    int sum3Digit = findMin3DigitSum( qualify, count );
    int minimumTemperature = findMinntemperature(temperatures , size);
    int secondMaximumOddTemperature      = find2ndMaxOddTemperature(temperatures , size);
    int sumOfPrimeTemperatureSum  =findPrimeTemperatureSum(temperatures , size);

    
  int choice;
    
    // Display the menu until the user chooses to exit
    do {
        cout << "\nChoose a case to display the result:" << endl;
        cout << "1. Average Temperature" << endl;
        cout << "2. Minimum Temperature" << endl;
        cout << "3. Sum of Odd Temperatures" << endl;
        cout << "4. Second Maximum Odd Temperature" << endl;
        cout << "5. Sum of 3-digit Temperatures" << endl;
        cout << "6. Sum of Prime Temperatures" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "The Average Temperature is: " << averageTemperature << endl;
                break;
            case 2:
                cout << "Minimum Temperature is: " << minimumTemperature << endl;
                break;
            case 3:
                cout << "Sum of Odd Temperatures is: " << sumOfOddTemperature << endl;
                break;
            case 4:
                cout << "Second Maximum Odd Temperature is: " << secondMaximumOddTemperature << endl;
                break;
            case 5:
                cout << "Sum of 3-digit Temperatures is: " << sum3Digit << endl;
                break;
            case 6:
                cout << "Sum of Prime Temperatures is: " << sumOfPrimeTemperatureSum << endl;
                break;
            case 0:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 0);




}



int main()
{
    Test();
    return EXIT_SUCCESS;
}
