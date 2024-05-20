#include<iostream>
#include<vector>
#include<map>
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
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    int ans=0;
    for(auto ele:mp){
        if(ele.second>1){
            ans+=ele.first;
        }
    }
    cout<<"Ans: "<<ans<<endl;


    return 0;
}