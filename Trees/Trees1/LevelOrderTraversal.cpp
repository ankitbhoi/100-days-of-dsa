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

// void levelOrderTraversal(Node* root){
//     queue<Node*>q;
//     //initially queue me root node ko push kar do
//     q.push(root);

//     while(!q.empty()){
//         //a queue ke first ko temp variable me lelo
//         Node* temp = q.front();
//         //b queue ke first ko pop kr lo jisko temp pe lia
//         q.pop();
//         //c temp variable k data ko print kr do
//         cout<<temp->data<<" ";
//         //d temp k left aur right data ko push kr do queue pe aur wohi same silsila
//         if(temp->right){
//             q.push(temp->left);
//         }
//         if(temp->right){
//             q.push(temp->right);
//         }
//     }
// }

// par agar hame each and every level ek different line me print krna hai to ayse krenge code
void levelOrderTraversal(Node* root){
    queue<Node*>q;
    //initially queue me root node ko push kar do
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        //a queue ke first ko temp variable me lelo
        Node* temp = q.front();
        //b queue ke first ko pop kr lo jisko temp pe lia
        q.pop();

        //yahan basically har level order traversal k bad ek null queue me add kia jarha hai...ab normal traverse krne wqt agr null milta hai to ek new line add ho jaega and queue me wapas ek null add hoega only if wo queue empty na ho bcz empty hone se infinite loop me fas jaega

        //example below
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            //c temp variable k data ko print kr do
            cout<<temp->data<<" ";
            //d temp k left aur right data ko push kr do queue pe aur wohi same silsila
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){

    Node* root = NULL;
    root = buildTree();

    levelOrderTraversal(root);

return 0;
} 


// basically agr tree kuch aysa hai 
    //         15
    //    25         35
    // 45   55    65   75

// to hamare logic k according 15 pehele queue me add ho jaega
// phir ek null add hoga queue me initial element ke liye 

// phir ham 15 ko queue se pop krke temp pe dal denge
// aur temp ko print kra ke uske left aur right ko queue me dal denge

// now queue pe null aya mtlb ki wahan new line print kro and agar queue empty NAHI hai to wahan ek Null add karo
// aysa karne se wahan pe child pehele add ho rakha hai agar exist karta ho tree pe to and uske bad null add ho raha hai.
//and the cycle continues

// 15 
// NULL
// 25 35 
// NULL NULL
// 45 55 65 75 
// NULL NULL NULL NULL
