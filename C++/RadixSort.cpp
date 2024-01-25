#include<iostream>
#include<vector>
using namespace std;

void CountSort(vector<int>&arr,int pos){
    int n=arr.size();

    //Creating Frequency array
    vector<int>freq(10,0);
    for(int i=0;i<n;i++){
        freq[(arr[i]/pos)%10]++;
    }

    //Calculate cumulative frequency 
    for(int i=1;i<10;i++){
        freq[i]+=freq[i-1];
    }

    //Creating answer array
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        ans[--freq[(arr[i]/pos)%10]]=arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i]=ans[i];
    }
}

void RadixSort(vector<int>&arr){
    int maxx=INT8_MIN;
    for(int i=0;i<arr.size();i++){
        maxx=max(arr[i],maxx);
    }

    for(int pos=1;maxx/pos>0;pos*=10){
        CountSort(arr,pos);
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

    cout<<"The original array is ";
    printArray(arr);
    cout<<endl;
    cout<<"The sorted array is ";
    RadixSort(arr);
    printArray(arr);

    return 0;
}



/**********OUTPUT**********/
/*Enter the size of vector
6
Enter the elements of vector
170
45
75
90
802
2
The original array is 170 45 75 90 802 2 
The sorted array is 2 45 75 90 170 802 */

/*Enter the size of vector
6
Enter the elements of vector
5
4
3
2
3
2
The original array is 5 4 3 2 3 2
The sorted array is 2 2 3 3 4 5*/