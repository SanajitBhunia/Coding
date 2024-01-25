#include<iostream>
using namespace std;
int digitSum(int n){
    int sum=0;
    while(n>0){
        int d=n%10;
        sum+=d;
        n/=10;
    }
    return sum;
}
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
int main(){
    int n;
    cin>>n;
    int d=bitt(n);
    cout<<d<<endl;
    int t=digitSum(d);
    cout<<t<<endl;

}