#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"please enter the number tht  want to check : ";
    cin>>n;
    bool isPrime=true;

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
             isPrime=false;
             break;

        }
    }
    if(isPrime==true)
    {
        cout<<"The number u have entred is prime "<<endl;
    }  
    else{
        cout<<"THe number is not prime ";
    } 

  return 0;
}