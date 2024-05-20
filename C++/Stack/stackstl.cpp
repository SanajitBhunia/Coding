#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int>st;
    cout<<st.empty()<<endl;
    st.push(1);
    st.push(2);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;
    cout<<st.size()<<endl;

    return 0;
}