#include<iostream>
#include<stack>
using namespace std;


//Iteratively
void insert_At_Bottom(stack<int>&st,int x){
    stack<int>temp;
    while(!st.empty()){
        int c=st.top();
        st.pop();
        temp.push(c);
    }
    st.push(x);
    while(!temp.empty())
    {
        int c=temp.top();
        temp.pop();
        st.push(c);
    }
}

//Recursively
void recursive_Insert(stack<int>&st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int c=st.top();
    st.pop();
    recursive_Insert(st,x);
    st.push(c);
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
   // Display(st);
    //insert_At_Bottom(st,100);
    recursive_Insert(st,109);
    Display(st);
    
    return 0;
}