#include<iostream>
using namespace std;

int LastOccurance(int arr[],int n,int element){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]<=element){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if (ans + 1 < n && arr[ans + 1] == element) {
        return ans + 1;
    } else {
        return -1; 
        } // Element not found
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int element;
    cout<<"Enter the target element"<<endl;
    cin>>element;
    int ans=LastOccurance(arr,n,element);
    cout<<"The last occurance of the element is "<<ans<<endl;

    return 0;
}