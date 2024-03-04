#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector<string>&str){
    sort(str.begin(),str.end());
    string s1=str[0];
    int i=0;
    string s2=str[str.size()-1];
    int j=0;
    string ans="";
    while(i<s1.size() && j<s2.size()){
        if(s1[i]==s2[j]){
            ans+=s1[i];
            i++;
            j++;
        }
        else{
            break;
        }
    }
    return ans;

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
/*Output*/
/*Enter the no of string
3
Enter the string
ant
anti
anthem
common prefix is: ant*/
/*Enter the no of string
3
Enter the string
flower
flight
flask
common prefix is: fl*/
/*Enter the no of string
2   
Enter the string
sanajit
akash
No common prefix is possible*/