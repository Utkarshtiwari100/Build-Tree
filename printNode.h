#include "TakeInput.h"

void printTree(TreeNode<int> *root) {
    if(root==NULL) {
        return;
    }
    queue<TreeNode<int> *> pn;
    pn.push(root);

    while(pn.size()!=0) {
        TreeNode<int>* front = pn.front();
        pn.pop();
        cout<<front->data<<":";

        for(int i=0; i<front->children.size();i++) {
            pn.push(front->children[i]);

            if(i==front->children.size()-1) {
                cout<<front->children[i]->data;
            }
            else {
                cout<<front->children[i]->data<<",";
            }
        }
        cout<<endl;

    }
}