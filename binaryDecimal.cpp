#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n ; 

    cout << "Enter Binary Number : " ;
    cin >> n ;
    
    int digit ; 
    int i = 0 ;
    int answer = 0 ;

    while( n != 0)
    {
        digit = digit % 10 ;

        if(digit == 1)
        {
        answer = answer + pow(2 , 1);
        }

        n = n/10;
        i++;
    } 
    cout << answer ; 
     
    return 0;
}