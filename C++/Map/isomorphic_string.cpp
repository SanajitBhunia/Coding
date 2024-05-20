#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

bool checkOneToMany(string s1,string s2){
    unordered_map<char,char>m;
    for(int i=0;i<s1.length();i++){
        if(m.find(s1[i])!=m.end()){
            if(m[s1[i]]!=s2[i]){
                return false;
            }
        }
        else{
            m[s1[i]]=s2[i];
        }
    }

    return true;
}


bool checkIsomorphic(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }

    //Checking one to many from s1 to s2
    bool s1s2=checkOneToMany(s1,s2);
    //Checking one to many from s1 to s2
    bool s2s1=checkOneToMany(s2,s1);


    return s1s2 && s2s1;

}


int main(){
    string s1,s2;
    cout<<"Enter the 1st string"<<endl;
    cin>>s1;
    cout<<"Enter the 2nd string"<<endl;
    cin>>s2;

    cout<<(checkIsomorphic(s1,s2)?"Is isomorphic":"Not isomorphic")<<endl;

    return 0;
}

/*OUTPUT*/
/*Enter the 1st string
aab
Enter the 2nd string
xxy
Is isomorphic*/
/*Enter the 1st string
abc
Enter the 2nd string
xyx
Not isomorphic*/
/*Time complexcity:O(N):N=s1.length()+s2.length()*/
/*Space Complexcity:O(1)*/