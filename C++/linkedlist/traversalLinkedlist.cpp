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

//Insert at beginning
void insertAtHead(Node* &head,int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}


//Insert at last
void insertAtTail(Node*&head,int val){
    Node* new_node=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=new_node;

}

//Inserting at given position

void insertAtPosition(Node* &head,int val,int pos){
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

//Update Position
void updatePosition(Node* &head,int k,int val){
    Node* temp=head;
    int current_pos=0;

    while(current_pos!=k){
        temp=temp->next;
        current_pos++;
    }
    temp->val=val;
}

//Traversal pf linked list
void Display(Node* head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next; 
    }
    cout<<"NULL"<<endl;
}

//Delete at head
void deleteAtHead(Node*&head){
    Node*temp=head;
    head=head->next;
    free(temp);
}
//Delete at tail
void deleteAtTail(Node*&head){
    Node* Second_last=head;
    while(Second_last->next->next!=NULL){
        Second_last=Second_last->next;
    }
    Node* temp=Second_last->next;
    Second_last->next=NULL;
    free(temp);
}
//Delete at Given position
void deleteAtPos(Node*&head,int pos){
    if(pos==0){
        deleteAtHead(head);
        return;
    }
    Node* temp1=head;
    int c_p=0;
    while(c_p!=pos-1){
        temp1=temp1->next;
        c_p++;
    }
    Node*temp2=temp1->next;
    temp1->next=temp1->next->next;
    free(temp2);
}

int main(){
    Node* head=NULL;
    insertAtHead(head,2);
    Display(head);
    insertAtHead(head,1);
    Display(head);
    insertAtTail(head,3);
    Display(head);
    insertAtTail(head,4);
    Display(head);
    insertAtPosition(head,14,2);
    Display(head);
    insertAtPosition(head,20,4);
    Display(head);
    updatePosition(head,5,21);
    Display(head);
    deleteAtHead(head);
    Display(head);
    deleteAtTail(head);
    Display(head);
    deleteAtPos(head,2);
    Display(head);

    return 0;
}