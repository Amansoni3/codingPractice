#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> s ;

    s.push("Aman");
    s.push("Kuamar");
    s.push("Soni");

    cout << endl ;

    cout << "First element " << s.front() << endl ;
    s.pop();
    cout << "First element " << s.front() << endl ;
    cout << "Size after pop " << s.size() << endl ;
   
}