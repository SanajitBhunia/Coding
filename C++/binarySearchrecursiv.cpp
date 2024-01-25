#include<iostream>
#include<vector>
using namespace std;

int binerySearch(vector<int>&arr,int target,int start,int end){
    if(start>end){
        return-1;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]<target){
       return binerySearch(arr,target,mid+1,end);
    }
    else{
        return binerySearch(arr,target,start,end-1);
    }
}

int main(){
    int n;
    cout<<"Enter the size of vector"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of vector"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the element you want to search"<<endl;
    cin>>target;
    int ans=binerySearch(arr,target,0,n-1);
    if(ans==-1){
        cout<<target<<" is not present in array"<<endl;
    }
    else{
        cout<<target<<" is present at index no "<<ans<<endl;
    }


    return 0;
}

/*OUTPUT*/
/*Enter the size of vector
8
Enter the elements of vector
2
4
5
7
15
24
45 
50
Enter the element you want to search
15
15 is present at index no 4*/
/*Enter the size of vector
5
Enter the elements of vector
4
8
12
96
101
Enter the element you want to search
100
100 is not present in array*/