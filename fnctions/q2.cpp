#include <iostream>
using namespace std;

void print_prime(int a)
{
    for(int i = 2; i <= a; i++)   // check numbers from 2 to a
    {
        bool isPrime = true;

        for(int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
            cout << i << " ";
    }
}

int main()
{
    int n;
    cout << "Please enter the number that u want to perform : ";
    cin >> n;   

    print_prime(n);

    return 0;
}