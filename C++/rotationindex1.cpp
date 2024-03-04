#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of vector"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of vector"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=arr[0];
    int idx=0;
    for(int i=0;i<n;i++){
        if(ans>arr[i]){
            ans=arr[i];
            idx=i;
        }
       

    }
    cout<<"ans="<<idx<<endl;

    return 0;


}