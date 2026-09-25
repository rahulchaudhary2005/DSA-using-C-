// #include<iostream>
// using namespace std;

// int main(){

// // calculate the max width of the binary treee 
// int width(Node* root)
// {
//    queue<pair<Node*, int>> q;

//    qpush({root, 0});
//    int max_width=0;

//    while(q.size()>0)
//    {
//     int currSize=q.size();
//     int leftIdx=q.front().second;
//     int rightIdx=q.back().second;

//     max_width=max(max_width, rightIdx-leftIdx+1);

//     for(int i=0 ; i<currSize; i++)
//     {
//         Node* node=q.front().first;
//         int idx=q.front().second;
//         q.pop();

//         if(node->left!=NULL)
//         {
//             q.push({node->left, 2*idx+1});
//         }
//         if(node->right!=NULL)
//         {
//             q.push({node->right, 2*idx+2});
//         }
//     }
//    }
//    return max_width;
// }


// }