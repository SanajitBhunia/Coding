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

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head=NULL;
    }
    void insert(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            return;
        }

        Node* temp=head;
        while (temp->next!=NULL)
        {
           temp=temp->next;
        }
        temp->next=new_node;
        
    }
    void Display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

void deleteAlternate(Node*&head){
    Node* current_node=head;
    

    while(current_node!=NULL && current_node->next!=NULL ){
        Node* temp=current_node->next;
        current_node->next=current_node->next->next;
        free(temp);
        current_node=current_node->next;
    }
}


int main(){
    LinkedList l1;
    for(int i=1;i<=5;i++){
        l1.insert(i);
    }
    l1.Display();
    deleteAlternate(l1.head);
    l1.Display();
    LinkedList l2;
    for(int i=1;i<=4;i++){
        l2.insert(i);
    }
    l2.Display();
    deleteAlternate(l2.head);
    l2.Display();


    return 0;
}