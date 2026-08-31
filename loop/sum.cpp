/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Please enter the number upto u want to print the sum : ";
    cin>>n;
    int sum=0;

    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
        
    }
    cout<<"The sum of all the odd number betwen 1 to n is : "<<sum;
    return 0;
}
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Plese enter th numbe upto u wnt to add hte sum : ";
    cin>>n;
    int i=1;
    int sum=0;

    while(i<=n)
    {
        if(i%2!= 0)
        {
            sum=sum+i;

        }
        i++;
    }
    cout<<"the sum of the number is : "<< sum;

    return 0;

}