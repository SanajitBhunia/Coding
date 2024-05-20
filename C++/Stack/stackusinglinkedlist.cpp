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

class Stack{
    Node* head;
    int capacity;
    int currSize;

    public:
    Stack(int c){
        this->capacity=c;
        this->currSize=0;
        head=NULL;

    }
    bool isEmpty(){
        return this->head==NULL;
    }
    bool isFull(){
        return this->currSize==this->capacity;
    }

    void push(int data){
        if(this->currSize==this->capacity){
            cout<<"OverFlow"<<endl;
            return;
        }
        Node* new_node=new Node(data);
        new_node->next=this->head;
        this->head=new_node;
        this->currSize++;
    }

    int pop(){
        if(this->head==NULL){
            cout<<"UnderFlow"<<endl;
            return INT16_MIN;
        }
        Node* new_head=this->head->next;
        this->head->next=NULL;
        Node* toBeRemoved=this->head;
        int result=toBeRemoved->val;
        delete toBeRemoved;
        this->head=new_head;
        return result;
    }

    int size(){
        return this->currSize;
    }
    int getTop(){
         if(this->head==NULL){
            cout<<"UnderFlow"<<endl;
            return INT16_MIN;
        }

        return this->head->val;
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
     Stack st(5);
    st.push(1);
    st.push(2);
    st.Display();
    cout<<st.isEmpty()<<endl;
    st.push(3);
    st.push(4);
    st.Display();
    cout<<st.isFull()<<endl;
    cout<<st.size()<<endl;
    cout<<st.getTop()<<endl;
    st.pop();
    cout<<st.getTop()<<endl;
    st.push(6);
    st.Display();
    return 0;
}