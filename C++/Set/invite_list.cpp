#include<iostream>
#include<set>
using namespace std;

int main(){
    set<string>inviteList;
    int n;
    cout<<"Enter the total no guest you wnat to add in invite list"<<endl;
    cin>>n;
    cout<<"Enter the names"<<endl;
    while(n--){
        string name;
        cin>>name;
        inviteList.insert(name);
    }

    cout<<"******FINAL LIST******"<<endl;
    for(auto i:inviteList){
        cout<<i<<endl;
    }

    return 0;
}