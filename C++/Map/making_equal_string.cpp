#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


bool canMakeEqual(vector<string>&v){
    int n=v.size();

    unordered_map<char,int>m;
    for(auto str:v){
        for(char ch:str){
            m[ch]++;
        }
    }

    for(auto ele:m){
        if(ele.second%n!=0){
            return false;
        }
    }

    return true;
}



int main(){
    int n;
    cout<<"Enter the size of the vector"<<endl;
    cin>>n;

    vector<string>v(n);
    cout<<"Enter the elements of the vector"<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<(canMakeEqual(v)?"Yes":"No")<<endl;

    return 0;
}

/*Output*/
/*Enter the size of the vector
3
Enter the elements of the vector
collegeee
coll
collegge
Yes*/
/*Enter the size of the vector
3
Enter the elements of the vector
wall
ah
wallahah
No*/

/*Time Complexcity=O(n)
n is the size of string*/
/*Space Complexcity=O(m)
m is the number of unique character*/