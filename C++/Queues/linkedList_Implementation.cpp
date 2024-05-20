#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
    Node(int data){
        this->val=data;
        this->next=NULL;
    }
};

class Queue{
    Node* head;;
    Node* tail;
    int size;
    public:
        Queue(){
            this->head=NULL;
            this->tail=NULL;
            this->size=0;
        }
    
    void enqueue(int data){
        Node* new_node=new Node(data);
        if(this->head==NULL){
            this->head= this->tail=new_node;
           
        }
        else{
           this->tail->next=new_node;
           this->tail=new_node;
        }
        this->size++;
    }

    void dequeue(){
        if(this->head==NULL){
            return;
        }
        else{
            Node* old_Head=this->head;
            Node* new_Head=this->head->next;
            this->head=new_Head;
            if(this->head==NULL) this->tail=NULL;
            old_Head->next=NULL;
            delete old_Head;
            this->size--;
        }
    }
    
    int getSize(){
        return this->size;
    } 

    bool isEmpty(){
        return this->head==NULL;
    }

    int front(){
        if(this->head==NULL){
            return -1;
        }

        return this->head->val;
    }
};




int main(){
    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(40);
    qu.dequeue();
    cout<<"Front: "<<qu.front()<<endl;
    cout<<"Size: "<<qu.getSize()<<endl;
    cout<<qu.isEmpty()<<endl;
    while (!qu.isEmpty())
    {
       cout<<qu.front()<<" ";
       qu.dequeue();
    }
     
   
    

    return 0;
}