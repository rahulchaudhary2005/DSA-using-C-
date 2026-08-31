#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>vec={1,2,3,4,5};

    vec.push_back(6); // Adding an element at the end of the vector
    vec.push_back(7);
    vec.insert(vec.begin(), 8); // Adding an element at the front of the vector

    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<"teh element of the i index is : "<<vec.at(3);



    return 0;
}
