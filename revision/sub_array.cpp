#include <iostream>
#include <iterator>
using namespace std;

int main ()
{
    int arr[]={1,4,-2,5,10,20};
    cout<<"The size of the array is : "<<sizeof(arr[0])<<endl;

    cout<<"printing all teh sub arrays -------";
    for(int st=0; st<6; st++)
    {
        for(int end=st; end<6; end++)
        {
            for(int i=st; i<=end; i++)
            {
                cout<<arr[i];
            }
            cout<<" ";

        }
        cout<<endl;
    }

    return 0;

}