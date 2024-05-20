#include<iostream>
#include<stack>
using namespace std;

class Queue{
    stack<int>st;
    public:
        Queue(){}

        void push(int data){
            this->st.push(data);
        }

        void pop(){
            if(this->st.empty()) return ;
            stack<int>tmp;
            while(this->st.size()>1){
                tmp.push(this->st.top());
                this->st.pop();
            }

            this->st.pop();
            while(!tmp.empty()){
                this->st.push(tmp.top());
                tmp.pop();
            }
        }

        bool isEmpty(){
            return this->st.empty();
        }

        int getFront(){
            if(this->st.empty()) return -1;
            stack<int>tmp;
            while(this->st.size()>1){
                tmp.push(this->st.top());
                this->st.pop();
            }

           int res=this->st.top();
            while(!tmp.empty()){
                this->st.push(tmp.top());
                tmp.pop();
            }
            return res;
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

