#include<iostream>
using namespace std;

int main ()
{ 
    int a=10;
    int* p=&a;
    int **q=&p;

    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of **q is "<<**q<<endl;
    cout<<"The value of *q os"<<*q<<endl;

    return 0;
}