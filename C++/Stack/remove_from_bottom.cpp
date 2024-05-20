#include<iostream>
#include<stack>
using namespace std;


void remove_from_bottom(stack<int>&st){
     if (st.empty())
        return;  // If stack is empty, do nothing
    int n=st.size();
    stack<int>t;
   for (int i = 0; i < n - 1; ++i) {
        int c = st.top();
        st.pop();
        t.push(c);
    }
    st.pop();

    while(!t.empty()){
        int c=t.top();
        t.pop();
        st.push(c);
    }

}

void Display(stack<int>&st){
    while(!st.empty()){
        int c=st.top();
        st.pop();
        cout<<c<<" ";
    }
    cout<<endl;

}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    remove_from_bottom(st);
    Display(st);
    return 0;
}