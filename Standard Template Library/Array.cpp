#include<iostream>
#include<array>
using namespace std ;

int main()
{
    array<int , 4> a = {1,2,3,4};
    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl ;
    }
    cout << "Element at 2nd index is " << a.at(2) << endl;
    cout << "Araay is empty " << a.empty() << endl;

    cout << "Element at front " << a.front();
    cout << "Element at back " << a.back();

}