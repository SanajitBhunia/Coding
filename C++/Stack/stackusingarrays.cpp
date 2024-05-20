#include<iostream>
using namespace std;

class Stack{
    int capacity;
    int* arr;
    int top;
    public:
        Stack(int c){
            this->capacity=c;
            arr=new int[c];
            this->top=-1;
        }
    
    void push(int data){
        if(this->top==this->capacity-1){
            cout<<"OverFlow"<<endl;
            return;
        }
        this->top++;
        arr[this->top]=data;
    }

    int pop(){
        if(this->top==-1){
            cout<<"UnderFlow"<<endl;
            return INT8_MIN;
        }
        this->top--;
    }

    int getTop(){
        if(this->top==-1){
            cout<<"UnderFlow"<<endl;
            return INT8_MIN;
        }

        return this->arr[this->top];
    }

    bool isEmpty(){
        if(this->top==-1){
            return true;
        }
        return false;
    }

    bool isFull(){
        if(this->top==this->capacity-1){
            return true;
        }
        return false;
    }

    int size(){
        return this->top+1;
    }

};

int main(){

    Stack st(5);
    st.push(1);
    st.push(2);
    cout<<st.isEmpty()<<endl;
    st.push(3);
    st.push(4);
    cout<<st.isFull()<<endl;
    cout<<st.size()<<endl;
    cout<<st.getTop()<<endl;
    st.pop();
    cout<<st.getTop()<<endl;
    st.push(6);

    return 0;
}
