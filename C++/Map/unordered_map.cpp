#include<iostream>
#include<unordered_map>
//#include<map>
using namespace std;

int main(){
   unordered_map<int,string>sd;

   //map<int,string>sd;

    sd[3]="ria";
    sd[2]="priya";
    sd.insert(make_pair(1,"sweety"));
    sd[5]="shreya";
    sd.insert(make_pair(4,"mou"));
    for(auto ele:sd){
        cout<<ele.first<<"  "<<ele.second<<endl;
    }

    return 0;
}