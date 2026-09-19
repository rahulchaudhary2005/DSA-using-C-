#include <iostream>
using namespace std;

class Stack{
    vector<int> v;


    public:

    void push(int value)
    {
        v.push_back(value);
    }

    void pop()
    {
        if(v.empty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        v.pop_back();
    }

    // top element of the stack
    int top()
    {
        return v[v.size()-1];
    }

    // checking the stacke is empty or not 

    bool empty()
    {
        return v.size() == 0;
    }

};

int main()
{
    Stack s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    // Now we will print the stack elements]
    while(!s1.empty())
    {
        cout << s1.top() << endl;
        s1.pop();
    }
    return 0;
}