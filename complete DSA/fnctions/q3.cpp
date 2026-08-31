// code to prit the fabonacci series upto n 

#include <iostream>
using namespace std;

void print_febonnachi(int a)
{
    int t1=0, t2=1, nextTerm;

    for(int i=1; i<=a; i++)
    {
        cout<<t1<<" ";
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
}

int main()
{
    int n;
    cout<<"Please enter the number upto which u want to print the fabonacci series : ";
    cin>>n;

    print_febonnachi(n);

    return 0;
}