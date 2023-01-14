#include<iostream>
using namespace std ;

int getLength( char name[] )
{
    int count = 0 ;
    for (int i = 0; name[i] != '\0' ; i++)
    {
        count++ ;
    }
    return count ;
}
int reverse(char name[] , int len)
{
    int start = 0 ;
    int end = len - 1 ;
    while (start < end)
    {
        swap(name[start] , name[end]);
        start ++ ;
        end -- ;
    }
    
}

int main ()
{
    char name[20] ; 

    cout << "Enter your name : " << endl ;
    cin >> name ;

    int len = getLength(name);
    
    reverse(name , len);
    cout << "Reverse name : ";
    cout << name << endl ;
}