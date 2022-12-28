#include<iostream>
using namespace std ;

void printArray(int arr[] , int size)
{
    cout << "Printing the array." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing Completed." << endl;
}
int main ()
{
    int number[15] ;

    cout << "The value at 15 index : " << number[15] << endl ;
    cout << endl << "Every thing is fine" << endl ; 

    int number2[15] = {2,7};
    printArray(number2 , 15);
    int number2Size = sizeof(number2)/sizeof(int);
    cout << "Size of number 2 is : " << number2Size <<endl;

    // Initialising all element of array with 0 

    int number3[10] = {0};
    printArray(number3 , 10);
    

    return 0;
}