#include<iostream>
using namespace std ;

int selectionSort(int arr[] , int size){
    for (int i = 0; i < size - 1 ; i++)
    {
        int mainIndex = i ; 
        for (int j = i + 1; i < size; j++)
        {
            if (arr[j] < arr[mainIndex])
            {
                mainIndex = j;
            }
        }
        swap(arr[mainIndex], arr[i]);
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
    int arr[6] = {6 , 5 , 4 , 3 , 2 , 1} ; 
    
    selectionSort(arr , 6 );
    printArray(arr ,6);

    return 0;
}