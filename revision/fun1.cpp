#include <iostream>
using namespace std;

void print_prime(int x)
{
    bool is_prime = true;

    if (x < 2)
    {
        is_prime = false;
    }
    else
    {
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                is_prime = false;
                break;
            }
        }
    }

    if (is_prime)
    {
        cout << "The number is prime." << endl;
    }
    else
    {
        cout << "The number is not prime." << endl;
    }
}

int main()
{
    int n;

    cout << "Please enter the number: ";
    cin >> n;

    print_prime(n);

    return 0;
}
