//------------------------------------------------Question 29-----------------------------------------------------

//-------------------------------------------------Pseudocode-----------------------------------------------------

Read patients temperatures (integer) from keyboard till we read 0
    by using array / collection.
Find average temperature (integer), 
prime temperatures sum(example: 41, prime number temperature), 
minimum 3 digit temperatures sum, 
minimum temperature, 
odd temperatures sum (example: 31), and
2nd maximum odd temperature.  
Check minimum temperature is also prime temperature.
Use coding standards and best practices to write pseudo code and c++ code.
Plan the task codes to make as reusable functions.

-------------------------------------------------------------------------------


function readTemperature(temperature->[int] , size->int&)
function findTemperatureSum(temperature->[int] , size ->int)->int
function findTemperatureAverage(TemperatureSum , size ->int)->int
function isPrimeTemperature(number->int)->bool
function findPrimeTemperatureSum(temperature->[int] , size ->int)->int
function isNumberMinimum3Digit(number->int)->bool
function findMin3DigitSum(temperature->[int], size -> int) -> int 
function findMinTemperature(temperature->[int] , size ->int)->int
function isOddTemperature(number -> int) -> bool
function findSumOfOddTemperature(temperature->[int] , size ->int)->int
function find2ndMaxOddTemperature(temperature->[int] , size ->int)->int






function readTemperature(temperatures->[int],size->int&)
       
       input i=0
       int currentTemperature
       while(true)
           print "enter the patient's temperature"
           read currentTemperature
           if(currentTemperature!=0)
                ++size
                temperatures[i]=currentTemperature
                ++i
            else
               break
            end if
        end while
end function                

function findTemperatureSum(temperature->[int] , size ->int)->int
       int sum = 0
       for i in temperatures
             sum + = temperatures[i]
       end for
       return sum
end function

function findTemperatureAverage(TemperatureSum->int , size ->int)->int
        return (TemperatureSum/size);
end function





function isPrimeTemperture(currentTemperature -> [int]) - bool

    if (currentTemperature <= 1)
        return false
    end if
    for (i = 2; i <= (currentTemperature / 2); i = i + 1)
        if (currentTemperature % i == 0)
            return false
        end if
    end for
    return true


function findPrimeTemperatureSum(temperatures -> [int], size -> [int]) -> [int]

    initialize sum = 0
    for (int i =0; i<size; i++)
        currentTemperature = temperatures[i]

        if (isPrimeTemperture(currentTemperature -> [int]) == true)
            sum += currentTemperature
        end if
    end for

    return sum




function isOddTemperature(number -> int) -> bool

    if (number % 2 != 0)
        return true
    else
        return false
    end if
    
end function

function findSumOfOddTemperature(temperature->[int] , size ->int)->int

    int oddSum = 0;
    
    for i from 0 ..size-1
    
        if (isOddTemperature(number))
            oddSum = (oddSum + number)
        end if
        
    end for
    
    return oddSum
    
end function






function isNumberMinimum3Digit( temperature -> [int] , size -> int , qualify -> [int]) -> bool
    count = 0
    for i in temperatures
        if ( temperatures[i] >= 100 )
            qualify[count] = temperatures[i]
            count++
    return count
            

function findMin3DigitSum( qualify -> [int], count -> int ) ->int
    for i in qualify
        sum += qualify[i]
    return sum






function find2ndMaxOddTemperature(temperatures[]-->int, size-->int)-->int

  maxOdd = INT_MIN
    secondMaxOdd = INT_MIN
    
     for i from 0...size
     
         if(isOddTemperature(number))
          
            if (temperatures[i]> maxOdd) 
            
                secondMaxOdd = maxOdd
                maxOdd = temperatures[i]
                
            end if
            else if (temperatures[i] > secondMaxOdd && temperatures[i] != maxOdd) 
            
                secondMaxOdd = temperatures[i]
                
            end elseif
        end if
    end for
    
    if (secondMaxOdd == INT_MIN)
     
          print " No second maximum odd temperature found " 
          return -1
     end if
     
     return secondMaxOdd



function findMinTemperature(temperature->[int],size->int)->int
    minTemp = MAX_INT
    for i in teperature[]
        if temperature[i] < minTemp
        minTemp = temperature[i]
return minTemp

function Test()
    //temperature [int]
    size=0
    readTemperature(temperature, size)
    TemperatureSum= findTemperatureSum(temperature->[int] , size ->int)->int
    averageTemperature = findTemperatureAverage(TemperatureSum, size)
    primeTemperatureSum = findPrimeTemperatureSum(temperature, size)

    
    int count= isNumberMinimum3Digit(temperatures, size, qualify);
    min3DigitTemperatureSum = findMin3DigitSum(qualify, count)


    minimumTemperature = findMinTemperature(temperature, size)
    oddTemperatureSum = findSumOfOddTemperature(temperature , size)
    secondMaxOddTemperature = find2ndMaxOddTemperature(temperature, size)
    print averageTemperature
    print primeTemperatureSum
    print min3DigitTemperatureSum
    print minimumTemperature
    print oddTemperatureSum
    print secondMaxOddTemperature
    if isprime(minimumTemperature)
         print "The minimum temperature is an prime number"
    else
         print "The minimum temperature is not a prime number"  

pseudoMain 
    Test()





//----------------------------------------------Program with array-------------------------------------------------


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
    
     
    cout << "The Average Temperature is: " << averageTemperature << endl;
    cout << "Minimum Temperature is: " << minimumTemperature << endl;
    cout << "Sum of Odd Temperatures is: " << sumOfOddTemperature << endl;

    if(secondMaximumOddTemperature == -1)
    {
        cout << " No second maximum odd temperature found as there is only 1 odd prime" << endl;
    }
    else
    {
        cout << "Second Maximum of Odd Temperatures is: " << secondMaximumOddTemperature<< endl;  
    }            
    
    cout << "Sum of 3 Digits is: " << sum3Digit << endl;
    cout << "Sum of Prime Temperature is: " << sumOfOddTemperature <<endl;
    


}


int main()
{
    Test();
    return EXIT_SUCCESS;
}


//------------------------------------------------Question 30-----------------------------------------------------

//-------------------------------------------------Pseudocode-----------------------------------------------------
 

function findMinimumTemperature(current -> int, min -> int) -> int
    if current < min
        min = current
    return min
end function

function readTemperature(temperatures -> int, size -> int, min -> int)
    initialize i as 0
    initialize currentTemperature as 0
    do
        prompt "Enter the patient's temperature (i+1):"
        read currentTemperature
        if currentTemperature != 0
            increment size by 1
            add currentTemperature to temperatures
            set min to findMinimumTemperature(currentTemperature, min)
            increment i by 1
        end if
    while currentTemperature != 0
end function

function findTemperatureAverage(temperatures -> int, size -> int) -> int
    return (temperatures / size)
end function

function Test()
    initialize min to MAX_SIZE
    initialize size to 0
    initialize temperatures to 0
    call readTemperature(temperatures, size, min)
    set averageTemperature to findTemperatureAverage(temperatures, size)
    print "The minimum Temperature is: ", min
    print "The Average Temperature is: ", averageTemperature
end function

function main()
    call Test()
    return EXIT_SUCCESS
end function



//--------------------------------------------------Program-------------------------------------------------------

#include<iostream>
using namespace std;
#define MAX_SIZE 1000
#include<cstdlib>
#include <climits>
#include <cmath>

//abel


int findMinimumTemperature(int current , int min )
{ 
   if(current < min)
   {
       min = current;
   }
   return min;
}

void readTemperature(int& temperatures,int& size,int& min)
{
       int i=0; //for iteration
       int currentTemperature=0;
       
       do
        {
            
         cout << "enter the patient's temperature " << (i+1) << ": ";
         cin >> currentTemperature;
            if (currentTemperature!=0)
            {    ++size;
                temperatures += currentTemperature;
                min = findMinimumTemperature(currentTemperature , min);
                ++i;
            }
                
        }
          while(currentTemperature!=0); 
          
        
 
}  



int findTemperatureAverage(int temperatures , int size)
{
    return (temperatures/size);
}






void Test()
{
    int min = MAX_SIZE;
    int size = 0;
    int temperatures=0;

    readTemperature(temperatures , size, min);
    
    int averageTemperature = findTemperatureAverage(temperatures , size);
    
    cout << "The minimum Temperature is: " << min << endl;
    cout << "The Average Temperature is: " << averageTemperature << endl;
   

    


}


int main()
{
    Test();
    return EXIT_SUCCESS;
}
