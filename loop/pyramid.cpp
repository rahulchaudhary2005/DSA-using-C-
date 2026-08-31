// /*

// problem statement 

//   1 
//   2 3 
//  4 5 6 
// 7 8 9 10 

// */

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     for (int i = 1; i <= n; i++) {

//         // Print spaces
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }

//         // Print stars
//         for (int k = 1; k <= i; k++) {
//             cout << "* ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Please enter th number tht u want to perform : ";
    cin >> n;

    int num = 1;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }

        cout << endl;
    }

    return 0;
}