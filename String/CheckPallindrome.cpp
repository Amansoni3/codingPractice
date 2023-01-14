#include<iostream>
using namespace std ;

bool isPalindrome(char a[] , int size)
{
    int start = 0;
    int end = size - 1 ;

    while (start < end)
    {
        if (a[start] != a[end])
        {
            return 0;
        }
        else
        {
            start ++ ;
            end -- ;
        }
        return 1 ;
    }
    
}

int getLength( char name[] )
{
    int count = 0 ;
    for (int i = 0; name[i] != '\0' ; i++)
    {
        count++ ;
    }
    return count ;
}

int main()
{
    char name[20] ; 

    cout << "Enter your name : " << endl ;
    cin >> name ;

    int len = getLength(name);

    cout << "Check Palidrome : " << isPalindrome(name , len);

}