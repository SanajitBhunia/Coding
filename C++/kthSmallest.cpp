#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l;
    
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            swap(arr[i],arr[j]);
            i++;
           
        }
    }
    swap(arr[i],arr[r]);
    return i;
}

int Kth_Smallest(int arr[],int l,int r,int k){
    if(k>0 && k<=r-l+1){
        int pos=Partition(arr,l,r);
        if(pos-l==k-1){
            return arr[pos];
        }
        else if(pos-l>k-1){
             return Kth_Smallest(arr,l,pos-1,k);

        }
        else{
           return Kth_Smallest(arr,pos+1,r,k-pos+l-1);
        }
        
    }
    return INT16_MAX;
}

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of  K "<<endl;
    cin>>k;
    int result=Kth_Smallest(arr,0,n-1,k);
    cout<<"The "<<k<<"th smallest element is "<<result<<endl;

    return 0;
}