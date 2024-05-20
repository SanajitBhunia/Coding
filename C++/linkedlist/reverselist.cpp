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

Node* recursiveReverseList(Node* &head){
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }

    //RecursiveCase
    Node* new_node=recursiveReverseList(head->next);
    head->next->next=head;
    head->next=NULL;//haed is now pointing the lastnode of linkedlist

    return new_node;
}

Node* reverseKLL(Node*&head,int k){
    Node* prevptr=NULL;
    Node* currptr=head;
    int c=0;
    while(currptr!=NULL && c<k){
        Node* nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        c++;
    }

    if(currptr!=NULL){
        Node* new_head=reverseKLL(currptr,k);
        head->next=new_head;
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
     l1.head=recursiveReverseList(l1.head);
     l1.Display();
     int k;
     cout<<"Enter the value of k"<<endl;
     cin>>k;
     l1.head=reverseKLL(l1.head,k);
     l1.Display();


    return 0;
}

/*OUTOUT*/
/*Enter the no of node you want
5
Enter the value of nodes
1
2
3
4
5
1->2->3->4->5->NULL
5->4->3->2->1->NULL
1->2->3->4->5->NULL
Enter the value of k
2
2->1->4->3->5->NULL*/