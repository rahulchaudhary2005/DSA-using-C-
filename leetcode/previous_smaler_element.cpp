#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {4, 5, 2, 10, 8};
    stack<int> s;
    vector<int> ans;


    // calculating the previous smaller element for each element in the array
    for(int i=0; i<arr.size(); i++)
    {
        while(s.size()>0 && s.top()>=arr[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(s.top());

        }
        s.push(arr[i]);
    }

    // print the calculated aray 
    for(int i=0 ; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}