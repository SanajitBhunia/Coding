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
        while(temp){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int getListLength(Node* head){
    Node* temp=head;
    int length=0;
    while(temp){
        length++;
        temp=temp->next;
        
    }

    return length;
}

Node* moveHeadbyK(Node* head,int k){
    Node* ptr=head;
    while(k--){
        ptr=ptr->next;
    }

    return ptr;
}


Node* getIntersection(Node* head1,Node* head2){

    //Step1:Calculate lengths of both linkedList;
    int l1=getListLength(head1);
    int l2=getListLength(head2);


    //Step2:Find diffrence k between linked list and move longer linkedlist ptr by k steps
    Node*  ptr1;
    Node* ptr2;
    if(l1>l2){
        int k=l1-l2;
        ptr1=moveHeadbyK(head1,k);
        ptr2=head2;
    }
    else{
        int k=l2-l1;
        ptr1=head1;
        ptr2=moveHeadbyK(head2,k);
    }

    //Step3:Compare ptr1 & ptr2
    while(ptr1){
        if(ptr1==ptr2){
            return ptr1;
        }

        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    return NULL;
}


int main(){

    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    l1.Display();
    LinkedList l2;
    l2.insert(6);
    l2.insert(7);
    l2.head->next->next=l1.head->next->next->next;
    l2.Display();

    Node* intersection=getIntersection(l1.head,l2.head);
    if(intersection){
        cout<<intersection->val<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }

    return 0;
}

/*OUTPUT*/
/*1->2->3->4->5->NULL
6->7->4->5->NULL
4*/
/*1->2->3->4->5->NULL
6->7->NULL
-1*/