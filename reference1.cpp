#include<iostream>

using namespace std;

int main()
{
    int no = 11;
    int & ref = no;
    int &x = no;

    int *p = & no;
    int *(&q) = p ;

    no++;

    cout<<no<<"\n";
    cout<<ref<<"\n";
    cout<<x<<"\n";
    
    cout<<&no<<"\n";
    cout<<&ref<<"\n";
    cout<<&x<<"\n";

    cout<<*p<<"\n";
    cout<<*q<<"\n";

    return 0;
}

