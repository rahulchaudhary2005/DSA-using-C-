#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Please enter the number that u want to print the pattern : ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<" ";

        }
        for(int k=0; k<n-i; k++)
        {
            cout<<i+1;
        }

        cout<<endl;

    }
    return 0;
    
}