#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void BucketSort(float arr[], int n){
    //Step 1:Create a bucket
    vector<vector<float>>bucket(n,vector<float>());

    //Step 2:Inserting elements into bucket
    for(int i=0;i<n;i++){
        int index=arr[i]*n;
        bucket[index].push_back(arr[i]);
    }

    //Step3:Sorting element
    for(int i=0;i<n;i++){
        if(!bucket.empty()){
            sort(bucket.begin(),bucket.end());
        }
    }

    //Step4:Combining elements
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[k++]=bucket[i][j];
        }
    }
}

void printArray(float arr[],int n){
   // int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    float arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The unsorted array is ";
    printArray(arr,n);
    BucketSort(arr,n);
    cout<<endl;
    cout<<"The sorted array is ";
    printArray(arr,n);

    return 0;
}

/*OUTPUT*/
/*Enter the size of array
8
Enter the elements of array
0.13
0.45
0.12
0.89
0.75
0.63
0.85
0.39
The unsorted array is 0.13 0.45 0.12 0.89 0.75 0.63 0.85 0.39
The sorted array is 0.12 0.13 0.45 0.39 0.63 0.75 0.85 0.89*/