#include <iostream>
using namespace std;


void change(int *p){
    *p =50;
}
int main()
{
    int a=10;

    cout<<"The value of a before the function call is : "<<a<<endl;
    
    change(&a);
    cout<<"The value of a after the function call is : "<<a<<endl;
    return 0;
}