#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int maxLengthZeroSumSubarray(vector<int>&v){
    unordered_map<int,int>m;
    int prefixSum=0;
    int maxLength=0;
    for(int i=0;i<v.size();i++){
        prefixSum+=v[i];
        if(prefixSum==0){
            maxLength++;
        }

        if(m.find(prefixSum)!=m.end()){
            maxLength=max(maxLength,i-m[prefixSum]);
        }
        else{
            m[prefixSum]=i;
        }
    }

    return maxLength;
}


int main(){
    int n;
    cout<<"Enter the size of vector"<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements of vector"<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<maxLengthZeroSumSubarray(v)<<endl;
    return 0;
}

/*OUTPUT
/*Enter the size of vector
8
Enter the elements of vector
15
-2 
2
-8
1
7
10
23
5*/
/*Enter the size of vector
3
Enter the elements of vector
1
2
3
0*/
/*
Time Complexcity:O(N):N=length of vector
Space Complecity:O(N)
*/