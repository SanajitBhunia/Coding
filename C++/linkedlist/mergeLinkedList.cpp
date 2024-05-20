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

Node* mergeLinkedList(Node* &head1,Node* &head2){
    Node* DummyList=new Node(-1);
    Node* ptr1=head1;
    Node* ptr2=head2;
    Node* ptr3=DummyList;

    while(ptr1 && ptr2){
        if(ptr1->val < ptr2->val){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
             ptr3->next=ptr2;
             ptr2=ptr2->next;
        }

        ptr3=ptr3->next;
    }

    if(ptr1){
        ptr3->next=ptr1;
    }
    else{
        ptr3->next=ptr2;
    }

    return DummyList->next;
}

int main(){
    LinkedList l1;
    LinkedList l2;
    int n;
    cout<<"Enter the no of nodes you want in l1"<<endl;
    cin>>n;
    cout<<"Enter the node value"<<endl;
    for(int i=1;i<=n;i++){
        int v;
        cin>>v;
        l1.insert(v);
    }
    l1.Display();
     int m;
    cout<<"Enter the no of nodes you want in l2"<<endl;
    cin>>m;
     cout<<"Enter the node value"<<endl;
    for(int i=1;i<=m;i++){
        int v;
        cin>>v;
        l2.insert(v);
    }
    l2.Display();

    LinkedList l3;
    l3.head=mergeLinkedList(l1.head,l2.head);
    l3.Display();


    return 0;
}

/*OUTPUT*/
/*Enter the no of nodes you want in l1
3
Enter the node value
45
68
97
45->68->97->NULL
Enter the no of nodes you want in l2
2
Enter the node value
49
63
49->63->NULL
45->49->63->68->97->NULL*/