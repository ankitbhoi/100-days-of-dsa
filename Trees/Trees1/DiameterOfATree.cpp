#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left=NULL;
        right=NULL;
    }
};

Node* buildTree(){
    int data;
    cout<<"ENTER THE DATA:"<<endl;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    //step a,b,c
    Node* root = new Node(data);

    cout<<"enter data for left part of " << data << " node " <<endl;
    root->left = buildTree();

    cout<<"enter data for right part of "<< data << " node " <<endl;
    root->right = buildTree();

    return root;
}
int height(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight =  height(root->right);

    int ans = max(leftHeight,rightHeight)+1;
}


//ans
//diameter of a tree :- the longest distance b/w two nodes
// ab either left depth ho skta hai yar fir right depth pe max ho skta hai ya fir left ka max and right ka max jodke longest ho skta hai 
int diameterOfBinaryTree(Node* root){
    if(root==NULL){
        return 0;
    }

    int op1=diameterOfBinaryTree(root->left);
    int op2=diameterOfBinaryTree(root->right);
    int op3=height(root->left)+height(root->right);

    int ans = max(op1,max(op2,op3));

    return ans;
}

int main(){

    Node* root = NULL;
    root = buildTree();

    cout<<diameterOfBinaryTree(root);

return 0;
} 
