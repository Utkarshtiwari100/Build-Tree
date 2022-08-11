#include <iostream>
#include <queue>
using namespace std;
#include "TreeNode class.h"

TreeNode<int> * takeInput() {
    int rootData;
    cout<<"Enter root Data"<<endl;
    cin>>rootData;

    TreeNode<int> *root = new TreeNode<int> (rootData);
    queue<TreeNode<int> *> pn;
    pn.push(root);

    while(!pn.empty()) {
        TreeNode<int> *front = pn.front();
        pn.pop();

        int numChildren;
        cout<<"Enter number of children of "<<front->data<<endl;
        cin>>numChildren;
        for(int i=0; i<numChildren; i++) {
            int childData;
            cout<<"Enter "<<i+1<<" ith child of "<<front->data<<endl;
            cin>>childData;

            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pn.push(child);
        }
    }

    return root;
}