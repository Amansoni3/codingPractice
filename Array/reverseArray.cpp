#include<iostream>
using namespace std ; 

void reverseArray(int arr[] , int size)
{
    int start = 0 ;
    int end = size-1;
    while (start <= end )
    {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    
}
void printArray(int arr[] , int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {1 , 4 , 0 , 5 , -2 , 15};
    int arr1[5] = {9 , 6 , -2 , 3 , 1};

    reverseArray(arr , 6);
    reverseArray(arr1 , 5);

    printArray(arr , 6);
    printArray(arr1 , 5);

    return 0;
}