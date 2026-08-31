#include <iostream>
using namespace std;

int main()
{
    string str;
    cout<<"plese enter the string that u want t o reverse : ";
    getline(cin, str);

    int start=0, end=str.length()-1;
    while(start<end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    // the time complexity of this approach is O(n) and the space complexity is O(1)
    cout<<"The reversed string is : "<<str<<endl;
    return 0;
}