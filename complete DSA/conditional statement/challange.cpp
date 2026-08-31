/*
🔥 Challenge Question For You

👉 Write a program that:

Takes a number

If divisible by 3 → print "Fizz"

If divisible by 5 → print "Buzz"

If divisible by both → print "FizzBuzz"*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number that u want to test ";
    cin>>num;

    cout<<"\n U have entered the number :  "<<num;

    if(num%3==0){
        cout<<"\nThe code is Fizz \n";


    }if(num%5==0){
        cout<<"Buzz"<<endl;
    }if(num%3==0 & num%5==0)
    {
        cout<<"The number is divisible by both 3 nad 5  and the output is FizzBuzz \n ";

    }
    else{
        cout<<"The number is not divisible by an y of the two ";
    }
    return 0;
}