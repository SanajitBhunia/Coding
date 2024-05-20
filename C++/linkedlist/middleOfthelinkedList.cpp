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

    void insert(int v){
        Node* new_node=new Node(v);
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
        while(temp){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int middle(Node* &head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow->val;
}

int main(){

    LinkedList l1;
    int n;
    cout<<"Enter the no of nodes you want"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int v;
        cin>>v;
        l1.insert(v);
    }
    l1.Display();

    int m=middle(l1.head);
    cout<<m<<endl;
    return 0;
}