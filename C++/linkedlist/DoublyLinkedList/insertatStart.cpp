#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* prev;
        Node* next;
    Node(int data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};

class DoublyLinkedList{
    public:
        Node* head;
        Node* tail;
    
    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }

    void insertAtStart(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }

       new_node->next=head;
       head->prev=new_node;
       head=new_node;
       return;
    }

    void inserAtLAst(int val){
        Node* new_node=new Node(val);
        if(tail==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        new_node->prev=tail;
        tail->next=new_node;
        tail=new_node;
        return;
    }

    void insertatKthpoistion(int k,int val){
        //asssuming k is less or equal to length of the linked list;
        Node* temp=head;
        int c=1;
        while(c<(k-1)){
            temp=temp->next;
            c++;
        }

        //temp will be pointing the k-1 th node
        Node* new_node=new Node(val);
        new_node->next=temp->next;
        temp->next=new_node;

        new_node->prev=temp;
        new_node->next->prev=new_node;
        return;
    }


    void Display(){
        Node* temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};


int main(){

    DoublyLinkedList dl;
    dl.insertAtStart(1);
    dl.Display();
    dl.insertAtStart(2);
    dl.Display();
    dl.insertAtStart(3);
    dl.Display();
    dl.inserAtLAst(4);
    dl.Display();
    dl.inserAtLAst(5);
    dl.Display();
    dl.inserAtLAst(6);
    dl.Display(); 
    dl.insertatKthpoistion(4,10);
    dl.Display();

   

    return 0;
}