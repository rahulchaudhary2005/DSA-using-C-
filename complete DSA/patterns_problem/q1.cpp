#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Please enter the number that much u want to print : ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
    

    return 0;

}

/*
out put will be 
12345
12345
12345
12345
12345
*/