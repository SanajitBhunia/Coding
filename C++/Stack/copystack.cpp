#include<iostream>
#include<stack>
using namespace std;


stack<int>CopyStack(stack<int>&input){
    stack<int>temp;
    stack<int>result;

    while(!input.empty()){
        int curr=input.top();
        input.pop();
        temp.push(curr);

    }
    while(!temp.empty()){
        int curr=temp.top();
        temp.pop();
        result.push(curr);
    }

    return result;
}
void Display(stack<int>&st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
        
    }
    cout<<endl;
}

int main(){

    stack<int>input;
    input.push(1);
    input.push(2);
    input.push(3);
    input.push(4);
    input.push(5);
    stack<int>res=CopyStack(input);
    cout<<"After Copy"<<endl;
    Display(res);
    return 0;
}