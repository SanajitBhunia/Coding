#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

bool isIsomorphic(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    vector<int>v1(128,-1);
    vector<int>v2(128,-1);
    for(int i=0;i<s1.length();i++){
        if(v1[s1[i]]!=v2[s2[i]]){
            return false;
        }
        v1[s1[i]]=v2[s2[i]]=i;
    }
        return true;
}

int main(){
    string s1;
    cout<<"Enter the 1st string"<<endl;
    cin>>s1;
    string s2;
    cout<<"Enter the 2nd String"<<endl;
    cin>>s2;
    if(isIsomorphic(s1,s2)){
        cout<<"The given strings are isomorphic"<<endl;
    }
    else{
        cout<<"The given strings are not isomorphic"<<endl;
    }

    return 0;
}

/*OUTPUT*/
/*Enter the 1st string
egg
Enter the 2nd String
add
The given strings are isomorphic*/
/*Enter the 1st string
egg
Enter the 2nd String
ada
The given strings are not isomorphic*/