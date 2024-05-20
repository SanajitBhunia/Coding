#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
  
    unordered_multimap<int,string>sd;

   
    sd.insert(make_pair(1,"sweety"));
    sd.insert(make_pair(4,"mou"));
    sd.insert(make_pair(2,"mou"));
    sd.insert(make_pair(3,"moumita"));
    for(auto ele:sd){
        cout<<ele.first<<"  "<<ele.second<<endl;
    }

   

    return 0;
}