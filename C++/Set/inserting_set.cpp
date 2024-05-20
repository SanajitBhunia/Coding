#include<iostream>
#include<set>
using namespace std;


int main(){

    set<int>set1;
    //OUTPUT:1 2 3 4

    //set<int,greater<int>>set1;
    //OUTPUT:4 3 2 1

    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    set1.insert(4);
    set1.insert(5);
    set1.insert(6);
    set1.insert(7);

    cout<<set1.size()<<endl;
    // set1.insert(4);//Duplicate value
    // cout<<set1.size()<<endl;

    set<int>::iterator itr;
    for(itr=set1.begin(); itr!=set1.end();itr++){
        cout<<*itr<<" ";
    }cout<<endl;

    set1.erase(5);
    //Deletion eith position
    // auto itr=set1.begin();
    // advance(itr,6);
    // set1.erase(itr);

     for(itr=set1.begin(); itr!=set1.end();itr++){
        cout<<*itr<<" ";
    }cout<<endl;


    // for(auto value:set1){
    //     cout<<value<<" ";
    // }cout<<endl;

    if(set1.find(8)==set1.end()){
        cout<<"Value is not present"<<endl;
    }
    else{
        cout<<"Value is present"<<endl;
    }

    return 0;
}