#include <iostream>
using namespace std ;

int main()
{
    int n;
    cout<<"PLease entre the number of rows :";
    cin>>n;

    int sum=1;

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<sum<<" ";
            sum++;
        }
        cout<<endl;

    }
    return 0;

}