#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of vector"<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements of vector"<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    set<int>s;
    for(auto i:v){
        s.insert(i);
    }

    auto itr=s.begin();
    itr++;
    cout<<"2nd Smallest= "<<*itr<<endl;
    return 0;
}