#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

        Node(int data){
            val=data;
            next=NULL;
        }
};

//Insertion at head
void insertAtHead(Node*&head,int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}

//Insertion at last
void insertAtLast(Node*head,int val){
    Node* new_node=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}
//Insertion at given position
void insertatPos(Node*&head,int val,int pos){
    if(pos==0){
        insertAtHead(head,val);
    }
    Node* new_node=new Node(val);
    Node* temp=head;
    int current_pos=0;
    while(current_pos!=pos-1){
        temp=temp->next;
        current_pos++;

    }
    new_node->next=temp->next;
    temp->next=new_node;
}
//Update at Kth Position
void update(Node*&head,int k,int val){
    Node* temp=head;
    int current_pos=0;
    while(current_pos!=k){
        temp=temp->next;
        current_pos++;
    }
    temp->val=val;
}

//Display the linked List
void Display(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
    
}

int main(){
    Node* n1=new Node(2);
    cout<<n1->val<<" "<<n1->next<<endl;
    insertAtHead(n1,1);
    Display(n1);
    insertAtLast(n1,3);
    Display(n1);
    insertatPos(n1,11,2);
    Display(n1);
    update(n1,2,111);
    Display(n1);

}