#include<iostream>
#include<stack>
using namespace std;

class Queue{
    stack<int>st;
    public:
        Queue(){}

        void push(int data){
            stack<int>tmp;
            while(!this->st.empty()){
                tmp.push(this->st.top());
                this->st.pop();
            }

            this->st.push(data);
            while(!tmp.empty()){
                this->st.push(tmp.top());
                tmp.pop();
            }
        }

        void pop(){
            this->st.pop();
        }

        bool isEmpty(){
            return this->st.empty();
        }

        int getFront(){
            if(this->st.empty()) return INT16_MIN;

            return this->st.top();
           
        }
};

int main(){

    Queue qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    cout<<qu.getFront()<<endl;
    qu.pop();
    while(!qu.isEmpty()){
        cout<<qu.getFront()<<" ";
        qu.pop();
    }

    return 0;
}

