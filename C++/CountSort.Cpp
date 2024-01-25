#include<iostream>
#include<vector>
using namespace std;

void CountSort(vector<int>&arr ){
    int n=arr.size();
    //Finding Max element
    int maxx=INT8_MIN;
    for(int i=0;i<n;i++){
        maxx=max(maxx,arr[i]);
    }
    //Creating Frequency array
   vector<int> frequency(maxx+1,0);
   for(int i=0;i<n;i++){
    frequency[arr[i]]++;
   }

   //Calculate cumulative frequency
   for(int i=1;i<=maxx;i++){
    frequency[i]+=frequency[i-1];
   }

   //Creating ans vector
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        ans[--frequency[arr[i]]]=arr[i];
    }

    //Copy the answer array to Original array
    for(int i=0;i<n;i++){
        arr[i]=ans[i];
    }
}


void printArray(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
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
    cout<<"The original vector is ";
    printArray(arr);
    cout<<endl;
    CountSort(arr);
    cout<<"The sorted vector is ";
    printArray(arr);

    return 0;

}


/**********OUTPUT**********/
/*Enter the size of vector
5
Enter the elements of vector
5
2
3
2
1
The original vector is 5 2 3 2 1
The sorted vector is 1 2 2 3 5*/

/*Enter the size of vector
8
Enter the elements of vector
222
193
456
222
193
12
56
48
The original vector is 222 193 456 222 193 12 56 48
The sorted vector is 12 48 56 193 193 222 222 456*/