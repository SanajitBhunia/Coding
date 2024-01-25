#include<iostream>
#include<algorithm>
using namespace std;

int BinarySearch(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of vector"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target element"<<endl;
    cin>>target;
    int ans=BinarySearch(arr,n,target);
    if(ans==-1){
        cout<<target<<" is not present in array"<<endl;;
    }
    else{
        cout<<target<<" is present at index no "<<ans<<endl;
    }

    return 0;
}

/*OUTPUT*/
/*Enter the size of array
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
Enter the target element
30
30 is not present in array*/
/*Enter the size of array
5
Enter the elements of vector
12
47
86
98
121
Enter the target element
98
98 is present at index no 3*/