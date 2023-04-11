#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node *prev;
    int data;
    Node *next;

    Node(int value){
        this->prev=NULL;
        this->data=value;
        this->next=NULL;

    }
};


void insert_at_head(Node* &head,int val){
    Node* temp=new Node(val);
    temp->next=head;
    if(head != NULL){
        head->prev=temp;
    }
    head=temp;
}


void insert_at_tail(Node *&head,int val){
    if(head==NULL){
        insert_at_head(head,val);
    }
    else{
        Node *curr=new Node(val);
        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=curr;
        curr->prev=temp;
    }
    
}

void insert_at_middle(Node* &head,int position,int val){
    if(position==1){
        insert_at_head(head,val);
        return;
    }

    Node *curr=new Node(val);
    Node *temp=head;
    int index=1;
    while(temp!=NULL){
        index++;
        if(index==position){
            curr->next=temp->next;
            temp->next->prev=curr;
            temp->next=curr;
            curr->prev=temp;
            break;
        }
        temp=temp->next;
        
    }
}


void display(Node* &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
 
int main(){
    Node *head=NULL;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);

    insert_at_middle(head,3,24);
    display(head);

return 0;
} 