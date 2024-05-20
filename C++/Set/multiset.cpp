#include<iostream>
#include<set>
using namespace std;

int main(){

    multiset<int>s;

    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(2);

    for(auto i:s){
        cout<<i<<" ";
    }

    return 0;
}