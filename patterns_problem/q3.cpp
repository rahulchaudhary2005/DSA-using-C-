#include <iostream>
using namespace std;
int main()
 {

    int n;
    cout<<"Please enter the number that u want to print : ";
    cin>>n;
    int sum=1;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<sum<<" ";
            sum++;
            
        }
        
        cout<<endl;
    }



 }

/*

The output will be

Please enter the number that u want to print : 5
1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 */
