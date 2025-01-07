//
#include<climits>
#include<cstdlib>
#include<iostream>
#define MAX_SIZE 5

using std::cin;
using std::cout;

void readNumbers(int numbers[], int size)
{ 
    for(int I = 0; I < size; I++)
    {
        int number = 0;
        cout << "Enter number at index " << I << ":";
        cin >> number; 
        numbers[I] = number; 
    } 
}

int findHighest(int numbers[], int size)
{ 
    int highestNumber = INT_MIN; // <climits>
    
    for(int I = 0; I < size; I++)
    {
        if(numbers[I] > highestNumber)
        {
            highestNumber = numbers[I];
        } 
    } 

    return highestNumber;
}

void findHighestTest()
{
    int size = MAX_SIZE; //int size {10};
    int x[size] {}; 
     
    readNumbers(x, size); //<iostream> | std::cin, std::cout
    int highestNumber = findHighest(x, size);
    cout << "Highest number is " << highestNumber << std::endl;
    cout << "Program Finished " << std::endl;
}

int main()
{
    findHighestTest();

    return EXIT_SUCCESS; //<cstdlib>
}
