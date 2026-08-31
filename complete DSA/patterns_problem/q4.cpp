#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Please enter the number upto u want to print the pattern : ";
    cin>>n;

    for(int i=1 ; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*"<<" ";

        }
        cout<<endl;
    }
    return 0;
}

/*
The output will be 

Please enter the number upto u want to print the pattern : 5
* 
* * 
* * * 
* * * * 
* * * * * 
*/