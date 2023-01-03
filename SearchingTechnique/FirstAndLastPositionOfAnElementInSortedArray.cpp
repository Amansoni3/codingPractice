#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] <= key) // Search in right
        {
            start = mid + 1;
        }
        else if (arr[mid] >= key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] <= key) // Search in right
        {
            start = mid + 1;
        }
        else if (arr[mid] >= key) // Search in left 
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int even[6] = {1, 2, 3, 3, 3, 5};
    cout << "The first occurence of 3 is index " << firstOcc(even , 6 , 3) << endl;
    cout << "The last occurence of index " << lastOcc(even , 6 , 3) << endl;
}