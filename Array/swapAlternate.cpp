#include<iostream>
using namespace std ;

void swapAlternate(int arr[] , int size)
{
     for (int i = 0; i < size; i=i+2)
     {
        if(i+1 < size)
        {
        swap(arr[i] , arr[i+1]);
        }
     }
     
}
void printArray(int arr[] , int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" " ;
    }
    cout << endl ;
}
int main()
{   
    int even[8] = {2,3,5,6,7,4,1,0};
    int odd[5] = {3,7,9,1,4};
    
    swapAlternate(even , 8);
    printArray(even , 8);
    cout << endl ;
    swapAlternate(odd , 5);
    printArray(odd , 5);
        
    return 0;
}