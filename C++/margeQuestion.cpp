#include<iostream>
#include<algorithm>
using namespace std;

void MargeSort(int arr1[],int n1,int arr2[],int n2,int arr3[]){
    int a=0;
    int b=0;
    int c=0;
    while(a<n1 && b<n2){
        if(arr1[a]<arr2[b]){
            arr3[c++]=arr1[a++];
        }
        else{
            arr3[c++]=arr2[b++];
        }
    }
    while(a<n1){
         arr3[c++]=arr1[a++];
    }
    while(b<n2){
         arr3[c++]=arr2[b++];
    }

}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void TakingInput(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int main(){
    int n1;
    cout<<"Enter the size of first array"<<endl;
    cin>>n1;
    int arr1[n1];
    cout<<"Enter the elements of first array"<<endl;
    TakingInput(arr1,n1);
    int n2;
    cout<<"Enter the size of 2nd array"<<endl;
    cin>>n2;
    int arr2[n2];
    cout<<"Enter the elements of 2nd array"<<endl;
    TakingInput(arr2,n2);
    cout<<"The first array is ";
    printArray(arr1,n1);
    cout<<"The first array is ";
    printArray(arr2,n2);
    cout<<endl;
    int arr[n1+n2];
    MargeSort(arr1,n1,arr2,n2,arr);
    cout<<"------------------------------------------------------------------------------------------"<<endl;
    cout<<"The finalarray is ";
    printArray(arr,n1+n2);


    return 0;
    

}