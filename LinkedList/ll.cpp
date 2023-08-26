#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(){
            this->data=0;
            this->next=NULL;
        }

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

//printing LL
void printNodes(Node* &head){
    // temp is a pointer hence its storing addresses
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    //nODE * is being used to dereference the incoming address from new operator
    Node* first= new Node(10);
    Node* second= new Node(20);
    Node* third =new Node(30);

    first->next=second;
    second->next=third;
    
    printNodes(first);

    return 0;
} 

#include<bits/stdc++.h>
using namespace std;
int main(){

return 0;
} 