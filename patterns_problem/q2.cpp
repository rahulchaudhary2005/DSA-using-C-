#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Please enter the number that much u want to print : ";
    cin>>n;
    char ch=65;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<char(65+j);
        }
        cout<<endl;
    }
    

    return 0;

}

/*. The output will be 
Please enter the number that much u want to print : 5
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE 
*/