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

class Linkedlist{
    public:
        Node* head;

   Linkedlist(){
    head=NULL;
   }

   void insert(int val){
    Node* new_node=new Node(val);
    if(head==NULL){
        head=new_node;
        return;
    }

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
   }

   void Display(){
    Node* temp=head;
    while(temp!=nullptr){
        
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
   }

};

Node* reverseList(Node*&head){
    Node* prevptr=NULL;
    Node* currptr=head;

    while(currptr!=NULL){
        Node* nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }

    return prevptr;

}

int main(){
    Linkedlist l1;
    int n;
    cout<<"Enter the no of node you want"<<endl;
    cin>>n;
    cout<<"Enter the value of nodes"<<endl;
    for(int i=1;i<=n;i++){
        int v;
        cin>>v;
        l1.insert(v);
    }
    l1.Display();
     l1.head= reverseList(l1.head);
     l1.Display();


    return 0;
}