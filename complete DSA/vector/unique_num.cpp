#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>vec = {1, 2, 3, 4, 5, 2, 3};
    
    for(int i=0; i<vec.size(); i++){
        int count = 0;
        for(int j=0; j<vec.size(); j++){
            if(vec[i] == vec[j]){
                count++;
            }
        }
        if(count == 1){
            cout << vec[i] << " ";
        }

    }
    return 0;
}