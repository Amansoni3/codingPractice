#include<iostream>
using namespace std ;

bool isEven(int a)
{
    if(a&1)
    {
        return 0 ;
    }
    else
    { return 1 ;}
}

int main() {

    int num ; 
    
    cin >> num ;
    
    int check = isEven(num);
    if (check == 1)
    cout << "The answer is even " ;
    else
    cout << "The answer is odd" ;
    
    return 0;
}