#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    int ans=0;
    int i=1;
    while(n>0){
        int bit=n%2;
        ans+=(bit*i);
        i*=10;
        n/=2;
        //i++;
    }
    cout<<ans<<endl;
}