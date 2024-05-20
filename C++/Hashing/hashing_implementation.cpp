#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

class Hashing{
    vector<list<int>>hashtable;
    int buckets;
public:
    Hashing(int size){
        buckets=size;
        hashtable.resize(size);
    }

    int hashvalue(int key){
        return key%buckets;//Division Method
    }

    void addKey(int key){
        int idx=hashvalue(key);
        hashtable[idx].push_back(key);
    }

    list<int>::iterator search(int key){
        int idx=hashvalue(key);
        return find(hashtable[idx].begin(), hashtable[idx].end(),key);
    }

    void Delete(int key){
        int idx=hashvalue(key);
        if(search(key)!=hashtable[idx].end()){ //Key is present
        hashtable[idx].erase(search(key));
        cout<<key<<" is deleted"<<endl;
        }
        else{
            cout<<key<<" is not present in the hashtable."<<endl;
        }

    }
};

int main(){
    Hashing h(10);

    h.addKey(1);
    h.addKey(2);
    h.addKey(3);

    h.Delete(3);
    h.Delete(3);
    //cout<<h.search(2)<<endl;
    return 0;
}