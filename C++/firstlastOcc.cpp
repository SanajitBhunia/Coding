#include<iostream>
#include<vector>
using namespace std;

int lastOcc(vector<int>&arr,int target){
    int st=0;
    int end=arr.size()-1;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]>target){
            end=mid-1;
        }
        else{
             ans=mid;
             st=mid+1;
        }
    }
   return ans;
}

int firstOcc(vector<int>&arr,int target){
    int st=0;
    int end=arr.size()-1;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]>=target){
           ans=mid;
           end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of vector"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int element;
    cout<<"Enter the target element"<<endl;
    cin>>element;
    if(firstOcc(arr,element)==-1){
        cout<<"-1"<<" "<<"-1"<<endl;
    }
    else{
    cout<<firstOcc(arr,element)<<" "<<lastOcc(arr,element)<<endl;
    }

    return 0;

}