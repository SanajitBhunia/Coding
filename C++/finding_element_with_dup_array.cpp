#include<iostream>
#include<vector>
using namespace std;

int findTargetindex(vector<int>&arr,int target){
    int st=0;
    int end=arr.size()-1;
    while(st<=end){
     if(arr[st]==target){
            return st;
        }
     if(arr[end]==target){
          return end;
      }

     if(arr[st]==arr[end]){
      st++;
      end--;
     }
     else{
     int mid=st+(end-st)/2;
     if(arr[mid]==target){
        return mid;
     }
     if(arr[mid]>=target){
        if(target>arr[st] && target<=arr[mid]){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
     }
     else{
         if(target>=arr[mid] && target<=arr[end]){
            st=mid+1;
         }
         else{
            end=mid-1;
          }
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
    cout<<"Enter the elements of the vector"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target element"<<endl;
    cin>>target;
    int ans=findTargetindex(arr,target);
    if(ans==-1){
        cout<<"Element is not present in array"<<endl;
    }
    else{
        cout<<"The index of target element is "<<ans<<endl;
    }

    return 0;
}

/*output*/
/*Enter the size of vector
10
Enter the elements of the vector
0
0
0
1
1
1
2
0
0
0
Enter the target element
2
The index of target element is 6*/