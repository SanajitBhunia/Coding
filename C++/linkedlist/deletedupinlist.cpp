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
         while(temp->next!=NULL){
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

void deleteDuplicate(Node* &head){
    Node* current_node=head;

    while(current_node){
       while(current_node->next && current_node->val==current_node->next->val){
        Node* temp=current_node->next;
        current_node->next=current_node->next->next;
        free(temp);
       }
       current_node=current_node->next;
    }
}

int main(){

    LinkedList l1;
    int n;
    cout<<"Enter how many node you want"<<endl;
    cin>>n;
    cout<<"Enter the value in sorted order"<<endl;
    for(int i=1;i<=n;i++){
        int v;
        cin>>v;
        l1.insert(v);

    }

    l1.Display();
    deleteDuplicate(l1.head);
    l1.Display();
    return 0;
}