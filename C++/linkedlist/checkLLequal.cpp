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
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

bool check(Node* head1,Node* head2){
    Node* ptr1=head1;
    Node* ptr2=head2;

    while(ptr1!=NULL  && ptr2!=NULL){
        if(ptr1->val!=ptr2->val){
            return false;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    return (ptr1==NULL && ptr2==NULL);
}


int main(){

    Linkedlist l1;
    Linkedlist l2;
    int n;
    cout<<"Enter how many node you want in l1"<<endl;
    cin>>n;
    cout<<"Enter the value in sorted order"<<endl;
    for(int i=1;i<=n;i++){
        int v;
        cin>>v;
        l1.insert(v);

    }

    l1.Display();
      int m;
    cout<<"Enter how many node you want in l2"<<endl;
    cin>>m;
    cout<<"Enter the value in sorted order"<<endl;
    for(int i=1;i<=m;i++){
        int v;
        cin>>v;
        l2.insert(v);

    }

    l2.Display();

    int ans=check(l1.head,l2.head);
    if(ans==0){
        cout<<"Linked Lists are not equal"<<endl;
    }
    else{
      cout<<"Linked Lists are  equal"<<endl;
    }

    return 0;

}

/*OUTPUT*/
/*Enter how many node you want in l1
5
Enter the value in sorted order
1
2
3
4
5
1->2->3->4->5->NULL
Enter how many node you want in l2
5
Enter the value in sorted order
5
4
3
2
1
5->4->3->2->1->NULL
Linked Lists are not equal*/

/*Enter how many node you want in l1
5
Enter the value in sorted order
1
2
3
4
5
1->2->3->4->5->NULL
Enter how many node you want in l2
5
Enter the value in sorted order
1
2
3
4
5
1->2->3->4->5->NULL
Linked Lists are  equal*/

/*Enter how many node you want in l1
5
Enter the value in sorted order
1
2
3
4
5
1->2->3->4->5->NULL
Enter how many node you want in l2
5
Enter the value in sorted order
1
4
2
3
5
1->4->2->3->5->NULL
Linked Lists are not equal*/