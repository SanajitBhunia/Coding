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

Node* swapPairs(Node* &head){
    if(!head || !head->next){
        return head;
    }
    Node* SecondNode=head->next;
    head->next=swapPairs(SecondNode->next);
    SecondNode->next=head;
    return SecondNode;
}

int main(){
    LinkedList l1;
    int n;
    cout<<"Enter the no nodes you want in your linked list"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int v;
        cin>>v;
        l1.insert(v);
    }
    l1.Display();
    LinkedList l2;
    l2.head=swapPairs(l1.head);
    l2.Display();
    
    return 0;
}


/*OUTPUT*/

/*Enter the no nodes you want in your linked list
5
1
2
3
4
5
1->2->3->4->5->NULL
2->1->4->3->5->NULL*/
