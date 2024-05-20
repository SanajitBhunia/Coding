#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of first vector size"<<endl;
    cin>>n;
    vector<int>v1(n);
    cout<<"Enter elements of v1"<<endl;
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    int m;
    cout<<"Enter the size of second vector size"<<endl;
    cin>>m;
    vector<int>v2(m);
    cout<<"Enter elements of v2"<<endl;
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }

    int ans=0;
    set<int>set1;
    for(int i:v1){
        set1.insert(i);
    }

    for(int i:v2){
        if(set1.find(i)!=set1.end()){
            ans+=i;
        }
    }

    cout<<"Answer: "<<ans<<endl;
    return 0;
}