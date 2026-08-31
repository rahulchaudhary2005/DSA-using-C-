// to calculate descimal numer into binary number
#include <iostream>
using namespace std;

void check_binary(int a)
{
    
    int ans=0,pow=1;
    while(a>0)
    {
        int last_digit=a%2;
        ans=ans+last_digit*pow;
        pow=pow*10;
        a=a/2;

    }
    cout<<"The binary number is : "<<ans<<endl;

}

int main()
{
    int n;
    cout<<"Please enter the number that u want to convert into binary : ";
    cin>>n;
    check_binary(n);

  
    return 0;
}