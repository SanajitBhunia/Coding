#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector<string>&str){

    string s1=str[0];
    int ans_length=s1.size();
    for(int i=1;i<str.size();i++){

        int j=0;
        while(j<s1.size() && j<str[i].size() && s1[j]==str[i][j]){
            j++;

           
        }
         ans_length=min(ans_length,j);
    }

    return s1.substr(0,ans_length);
}

int main(){
    int n;
    cout<<"Enter the no of string"<<endl;
    cin>>n;
    vector<string>str(n);
    cout<<"Enter the string"<<endl;
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    string ans=longestCommonPrefix(str);
    if(ans.size()<1){
        cout<<"No common prefix is possible"<<endl;
    }
    else{
        cout<<"common prefix is: "<<ans<<endl;
    }

    return 0;
}
