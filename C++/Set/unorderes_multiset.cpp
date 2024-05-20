#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

    unordered_multiset<int>s;

    s.insert(4);
    s.insert(8);
    s.insert(3);
    s.insert(1);
    s.insert(4);

    for(auto i:s){
        cout<<i<<" ";
    }

    return 0;
}