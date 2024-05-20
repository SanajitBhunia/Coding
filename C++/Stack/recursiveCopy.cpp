#include<iostream>
#include<stack>
using namespace std;

void CopyStack(stack<int>&st, stack<int>&res){

    if(st.empty()) return;
    int c=st.top();
    st.pop();
    CopyStack(st,res);
    res.push(c);
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
    stack<int>res;
    CopyStack(input,res);
    cout<<"After Copy"<<endl;
    Display(res);
    return 0;
}