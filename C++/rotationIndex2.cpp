#include<iostream>
#include<vector>
using namespace std;

int findMinimumIndex(vector<int>&arr){
    int n=arr.size();
    if(n==1){
        return 0;
    }
    int st=0;int end=n-1;
    if(arr[st]<arr[end]){
        return st;
    }

    while(st<=end){
        int mid=st+(end-st)/2;

        if(arr[mid]>arr[mid+1]){
            return mid+1;
        }
        if(arr[mid]<arr[mid-1]){
            return mid;
        }
        if(arr[mid]>arr[end]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of vector"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the vector"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=findMinimumIndex(arr);
    cout<<"Index of minimum element is "<<ans<<endl;

    return 0;
}
/*OUTPUT*/
/*Enter the size of vector
5
Enter the elements of the vector
3
4
5
1
2
Index of minimum element is 3*/