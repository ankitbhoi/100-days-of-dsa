#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head,int data){
    Node *temp=new Node(12);
    temp->next=head;
    head=temp;
}

void print(Node* &head ){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtEnd(Node* &head,int data){
    Node* temp=new Node(data);
    Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;

    }
    curr->next=temp;
    curr=temp;
}

int main(){
    Node *node1= new Node(10);
    Node *head=node1;
    insertAtHead(head,12);
    print(head);
    insertAtEnd(head,24);
    print(head);
return 0;
} 