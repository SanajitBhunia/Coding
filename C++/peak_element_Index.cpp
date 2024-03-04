#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int peakIndex(vector<int>&arr){
    int st=0;
    int end=arr.size()-1;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;

        if(arr[mid-1]<arr[mid]){
            ans=max(ans,mid);
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
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
9
Enter the elements of vector
1
2
3
4
5
6
3
2
0
The 5 indexed element 6 is peak element*/
/*Enter the size of vector
4
Enter the elements of vector
0
4
1
0
The 1 indexed element 4 is peak element*/