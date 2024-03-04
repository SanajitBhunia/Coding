#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int peakIndex(vector<int>&arr){
    int n=arr.size();
    int st=0;
    int end=n-1;
    
    while(st<=end){
        int mid=st+(end-st)/2;
        if(mid==0){
            if(arr[mid]>arr[mid+1]){
                return 0;
            }
            else{
                return 1;
            }
        }
        else if(mid==n-1){
            if(arr[mid]>arr[mid-1]){
                return n-1;
            }
            else{
                return n-2;
            }
        }
        else{
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
       
    }
    return -1;
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

    int ans=peakIndex(arr);
    cout<<"The "<<ans<<" indexed element "<<arr[ans]<<" is peak element"<<endl;

    return 0;
}

/*OUTPUT*/
/*Enter the size of vector
7
Enter the elements of vector
1
2
1
2
6
10
3
The 5 indexed element 10 is peak element*/
/*Enter the size of vector
6
Enter the elements of vector
0
2
4
3
0
-1
The 2 indexed element 4 is peak element*/
