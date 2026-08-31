#include <iostream>
using namespace std;


int calculate_facetorial(int a){
    int fac =1;
    for(int i=1; i<=a ; i++)
    {
        fac*=i;
    }
    return fac;
}

int main()
{
    int n,r;
    cout<<"PLease entre the value of n : ";
    cin>>n;

    cout<<"Please entre the value of r : ";
    cin>>r;
    cout<<endl;
    

    int n_fac=calculate_facetorial(n);
    int r_fac=calculate_facetorial(r);
    int n_r_fac= calculate_facetorial(n-r);

    int ncr=n_fac/(r_fac * n_r_fac);

    cout<<"The nCr value of the provided question is : "<<ncr;

    return 0;

}