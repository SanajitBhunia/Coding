#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int>targetSumPair(vector<int>&v,int targetSum){
    unordered_map<int,int>m;
    vector<int>ans(2,-1);

    for(int i=0;i<v.size();i++){
        if(m.find(targetSum-v[i])!=m.end()){
            ans[0]=m[targetSum-v[i]];
            ans[1]=i;
            return ans;
        }
        else{
            m[v[i]]=i;
        }
    }

    return ans;
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
    int tg;
    cout<<"Enter the target sum"<<endl;
    cin>>tg;
    vector<int>ans=targetSumPair(v,tg);
    cout<<ans[0]<<" "<<ans[1]<<endl;

    return 0;
}

/*OUTPUT*/
/*Enter the size of vector
7
Enter the elements of vector
1
4
5
11
13
10
2
Enter the target sum
13
3 6*/
/*Enter the size of vector
5
Enter the elements of vector
9
10
2
3
5
Enter the target sum
15
1 4*/

/*Time Complexcity=O(N)
*/