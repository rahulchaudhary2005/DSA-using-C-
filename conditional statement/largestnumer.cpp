#include <iostream>
using namespace std;

int main()
{

    int a;
    cout<<"Please enter an number to check : ";
    cin>>a;

    cout<<"You have entered the number that is : "<<a;

    //now checking the cndition for the positive negative or zero
    if(a==0)
    {
        cout<<"You have entered the zero \n";

       
    } if(a>0)
        {
            cout<<"You have entered th positive number \n";
        }
    else{
        cout<<"u have entred the negative number ";
    }

    return 0;
}