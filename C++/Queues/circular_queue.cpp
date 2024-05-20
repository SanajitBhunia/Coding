#include<iostream>
#include<vector>
using namespace std;

class Queue{
    int front;
    int back;
    vector<int>v;
    int ts;
    int cs;
 
public:
    Queue(int n){
        v.resize(n);
        this->ts=n;
        this->front=0;
        this->back=n-1;
        this->cs=0;
    }

    void enqueue(int data){
       if(isFull()) return;
       this->back=(this->back+1)%this->ts;
       this->v[this->back]=data;
       this->cs++;
    }

    void dequeue(){
       if(isEmpty()) return;
       this->front= (this->front+1)%this->ts;
       this->cs--;
    }

    int getFront(){
        if(this->front==-1) return -1;
        return this->v[this->front];
    }
    int Rear() {
        if (isEmpty())
            return -1;
        return this->v[this->back];
    }

    bool isEmpty(){
        return this->cs==0;
    }

    bool isFull(){
        return this->cs==this->ts;
    }
    
};

int main(){
    Queue qu(3);
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.dequeue();
    qu.enqueue(40);
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    qu.enqueue(100);
    qu.enqueue(200);
   
   
    while (!qu.isEmpty())
    {
       cout<<qu.getFront()<<" ";
       qu.dequeue();
    }
    return 0;
    
}
