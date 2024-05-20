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

void removeKthNodeFromEnd(Node* &head,int k){
    Node* ptr1=head;
    Node* ptr2=head;

//It doesnot handle case where n is greater then the length of the list;
    // int count=k;
    // while(count--){
    //     ptr2=ptr2->next;
    // }
      for (int i = 0; i < k; ++i) {
            if (ptr2 == nullptr) {
                // Handle case where n is greater than the length of the list
                return ;
            }
            ptr2 = ptr2->next;
        }
    if(ptr2==NULL){
        Node* temp=head;
        head=head->next;
        free(temp);
        return;
    }

    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    Node* temp=ptr1->next;
    ptr1->next=ptr1->next->next;
    free(temp);
}

int main(){
    LinkedList l1;
    int n;
    cout<<"Enter the no of nodes you want"<<endl;
    cin>>n;
    cout<<"Enter the value of the node"<<endl;
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        l1.insert(v);
    }
    l1.Display();
    int k;
    cout<<"Enter the position"<<endl;
    cin>>k;
    removeKthNodeFromEnd(l1.head,k);
    l1.Display();

    return 0;
}