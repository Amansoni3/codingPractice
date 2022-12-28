#include<iostream>
using namespace std;

int main(){

    int n;
    bool isPrime = 1;

    cout<<"Enter the number:";
    cin>>n;
    
    for(int i = 2 ; i<n ; i++)
    {
        if(n%2 == 0)
        {
            isPrime = 0 ;
            break;
        }
    }

    if(isPrime == 0)
    {
        cout<<"Not a Prime";
    }
    else
    {
        cout<<"Prime !!";
    }

    return 0;
}