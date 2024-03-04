#include<iostream>
using namespace std;

int sqrtfun(int n){
    int start=1;
    int end=n;
    int ans=0;
    while(start<=end){
        int mid=start+(end-start)/2;

        if(mid*mid<=n){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    int ans=sqrtfun(n);
    cout<<"The answer(Square root) is "<<ans<<endl;

    return 0;
}

/*OUTPUT*/
/*Enter the no
4
The answer(Square root) is 2*/
/*Enter the no
11
The answer(Square root) is 3*/
/*Enter the no
17
The answer(Square root) is 4*/
