#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

bool isAnagram(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    vector<int>f(26,0);
    for(int i=0;i<s1.length();i++){
        f[s1[i]-'a']++;
        f[s2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(f[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){
    string s1;
    cout<<"Enter the 1st string"<<endl;
    cin>>s1;
    string s2;
    cout<<"Enter the 2nd string"<<endl;
    cin>>s2;
    if(isAnagram(s1,s2)){
        cout<<"The strings are anagram"<<endl;
    }
    else{
         cout<<"The  given strings are not anagram"<<endl;
    }

    return 0;
}

/*OUTPUT*/
/*Enter the 1st string
anagram
Enter the 2nd string
nagaram
The strings are anagram*/
/*Enter the 1st string
bank
Enter the 2nd string
atm
The  given strings are not anagram*/