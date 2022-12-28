#include<iostream>
using namespace std;

int power(int number , int pow)
{
    int ans = 1 ;
    for (int i = 1 ; i <= pow ; i++)
    {
        ans = ans * number ;
    }
    return ans ;
}
int main () {

    int a , b ;
    cout << "Enter the number : ";
    cin >> a >> b ;

    int answer = power(a , b);
    cout << answer ;
}