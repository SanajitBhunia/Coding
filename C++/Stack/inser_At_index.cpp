#include<iostream>
#include<stack>
using namespace std;

void insert_at_Index(stack<int>&st,int pos,int val){
    stack<int>temp;
        int n=st.size();
        int c=0;
        while(c<n-pos){
            c++;
            int c=st.top();
            st.pop();
            temp.push(c);
        }
        st.push(val);
        while(!temp.empty()){
            int c=temp.top();
            temp.pop();
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
    insert_at_Index(st,2,109);
    Display(st);
    return 0;
}