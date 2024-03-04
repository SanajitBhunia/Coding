#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

string StringSort(string str){
    vector<int>f(26,0);

    //sorting frequency of every character in a string
    for(int i=0;i<str.length();i++){
        int index=str[i]-'a';
        f[index]++;
    }

    //Create our sorted string
    int j=0;
    for(int i=0;i<26;i++){
        while(f[i]--){
            str[j++]=i+'a';
        }
    }
    return str;
}

int main(){
    string str;
    cout<<"Enter the String"<<endl;
    cin>>str;
    cout<<"Given: "<<str<<endl;
    
    cout<<"Sorted: " <<StringSort(str)<<endl;

    return 0;
}

/*OUTPUT*/
/*Enter the String
star
Given: star
Sorted: arst*/
/*Enter the String
codingwallah
Given: codingwallah
Sorted: aacdghillnow*/