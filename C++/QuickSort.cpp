#include<iostream>
using namespace std;

int Partition(int arr[],int first,int last){
    int pivot=arr[last];
    int i=first-1;//for insert element less then pivot element at begining of the array
    int j=first;//for tht dinding of less than pivot element;
    for(;j<last;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    //last less than element of the pivot element is ith position
    //the correct position of the pivot element is i+1
    swap(arr[i+1],arr[last]);
    return i+1;
}

void QuickSort(int arr[],int first,int last){
    if(first>=last){
        return;
    }

    int pi=Partition(arr,first,last);
    QuickSort(arr,first,pi-1);
    QuickSort(arr,pi+1,last);
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The unsorted array is ";
    printArray(arr,n);
    cout<<endl;
    QuickSort(arr,0,n-1);
    cout<<"After sorting the array is ";
    printArray(arr,n);

    return 0;
}

/**********OUTPUT**********/
/*Enter the size of array
6
Enter the elements of array
10
3
7
9
1
8
The unsorted array is 10 3 7 9 1 8
After sorting the array is 1 3 7 8 9 10*/
/*Enter the size of array
6
Enter the elements of array
20
12
35
16
18
30 
The unsorted array is 20 12 35 16 18 30
After sorting the array is 12 16 18 20 30 35*/