#include<iostream>
using namespace std;


int bitt(int n){
   
    int ans=0;
    int i=1;
    while(n>0){
        int bit=n%2;
        ans+=(bit*i);
        i*=10;
        n/=2;
    }
    return ans;
}
int digitSum(int n){
    int sum=0;
    while(n>0){
        int d=n%10;
        sum+=d;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int k;
    cout<<"Enter the set no"<<endl;
    cin>>k;
    int arr[n];
    int total=0;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        int d=bitt(i);
        int t=digitSum(d);
        if(t==k){
            total+=arr[i];
        }
    }

    cout<<"Total= "<<total<<endl;

    return 0;
}