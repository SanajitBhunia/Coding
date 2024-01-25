#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    int nn=n;
    int ans=0;
    int i=1;
    while(n>0){
        int bit=n%2;
        ans+=(bit*i);
        i*=10;
        n/=2;
        

    }
    cout<<"Binary Representation: "<<ans<<endl;
    int t=__builtin_popcount(nn);
    cout<<"1'S count= "<<t<<endl;

    return 0;
}