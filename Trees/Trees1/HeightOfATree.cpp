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

//ans
int height(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight =  height(root->right);

    int ans = max(leftHeight,rightHeight)+1;
}

int main(){

    Node* root = NULL;
    root = buildTree();

    cout<< "height: " << height(root)<<endl;

return 0;
} 
