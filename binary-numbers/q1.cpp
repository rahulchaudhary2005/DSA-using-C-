//Calculating the decimal form to binary form 
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Please entre the number to convert : ";
    cin>>n;
    
    int ans= 0;
    int power =1;

    while(n>0)
    {
        int dec=n%10;
        
        ans=ans+(dec*power);
        power=power*10;
        n=n/2;

    }

    cout<<"The binary form of the given number is : "<<ans;
    return 0;

}