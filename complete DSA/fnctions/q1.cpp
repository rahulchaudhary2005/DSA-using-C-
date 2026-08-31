// Wap to chek an number is prime or not 

#include <iostream>
using namespace std;

void check_prime(int a)
{
    bool is_prime =true;
    for(int i=2; i<a; i++){
        if(a%i==0)
        {
             is_prime= false;
             break;
        }
    }
   if(is_prime==true)
    {
        cout<<"THe number u have entred is prime number !! "<<endl;

    }
    else{
        cout<<"The number is not prime !! ";
    }
}
int main()
{
    int n;
    cout<<"Please enter a number that u want to cheek : ";
    cin>>n;
    check_prime(n);

    return 0;
}