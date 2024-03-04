#include<iostream>
#include<vector>
using namespace std;

int isFound(vector<vector<int>>&arr,int target){
    int n=arr.size();
    int m=arr[0].size();
    int st=0;int end=n*m-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        int x=mid/m;
        int y=mid%m;
        if(arr[x][y]==target){
            return 1;
        }
        else if(arr[x][y]>target){
            end=mid-1;

        }
        else{
            st=mid+1;
        }
    }
    return 0;
}

int main(){
    vector<vector<int>>arr={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=3;
    cout<<isFound(arr,target)<<endl;

    return 0;
}