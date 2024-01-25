#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void BucketSort(float arr[], int n){
    //Step 1:Create a bucket
    vector<vector<float>>bucket(n,vector<float>());

    //finding range
    float max_ele=arr[0];
    float min_ele=arr[0];
    for(int i=1;i<n;i++){
        max_ele=max(max_ele,arr[i]);
        min_ele=min(min_ele,arr[i]);
    }
    float range=(max_ele-min_ele)/n;

    //Step 2:Inserting elements into bucket
    for(int i=0;i<n;i++){
        int index=(arr[i]-min_ele)/range;
        //for boundary element
        float diff=(arr[i]-min_ele)/range-index;
        if(diff==0 && arr[i]!=min_ele){
        bucket[index-1].push_back(arr[i]);
        }
        else{
             bucket[index].push_back(arr[i]);
        }
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
6.13
8.45
0.12
1.89
4.75
2.63
7.85
10.39
The unsorted array is 6.13 8.45 0.12 1.89 4.75 2.63 7.85 10.39
The sorted array is 0.12 1.89 2.63 4.75 6.13 8.45 7.85 10.39*/