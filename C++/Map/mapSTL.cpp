#include<iostream>
#include<map>
using namespace std;

int main(){

    map<string,long long int>directory;
    int n;
    cout<<"How many enteries you want to add"<<endl;
    cin>>n;
    cout<<"Enter name & ph no accordingly"<<endl;
    for(int i=0;i<n;i++){
        string s1;
        cout<<"Name:";
        cin>>s1;
        long long int v;
         cout<<"Number: ";
        cin>>v;
        directory[s1]=v;

    }
    cout<<"Entries are added sucessfully!!!"<<endl;
    char ans;
    cout<<"Do you want to see the directory?[If yes press Y !!]"<<endl;
    cin>>ans;
    if(ans=='Y'||ans=='y'){
        cout<<"**Directory**"<<endl;
        for(auto ele:directory){
            cout<<"Name: "<<ele.first<<endl;
            cout<<"Number: "<<ele.second<<endl;
        }
    }
    else{
        cout<<"Thank You!!"<<endl;
    }
    return 0;
}