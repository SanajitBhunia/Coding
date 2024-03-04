#include<iostream>
#include<vector>
using namespace  std;

int Search(vector<int>&arr,int element){
    int start=0;
    int end=arr.size()-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==element){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<element){
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
    cout<<"Enter the size of vector"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of vector"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int element;
    cout<<"Enter the element"<<endl;
    cin>>element;
    int ans=Search(arr,element);
    if(ans==-1){
        cout<<element<<" is not present in array"<<endl;
    }
    else{
        cout<<element<<" is present. The first occurance of "<<element<<" is "<<ans<<endl;
    }

    return 0;
}

/*OUTPUT*/
/*Enter the size of vector
10
Enter the elements of vector
2
5
5
5
6
6
9
9
9
9
Enter the element
5
5 is present. The first occurance of 5 is 1*/
/*Enter the size of vector
10
Enter the elements of vector
2
5
5
5
6
6
9
9
9
9
Enter the element
9
9 is present. The first occurance of 9 is 6*/
