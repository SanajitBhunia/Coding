#include<iostream>
using namespace std;

class ABC{
    int x;
    public:
    void set(int n){
        x=n;
    }
    int get(){
        return x;
    }
};

int main(){
    ABC ad;
    ad.set(3);
    cout<<ad.get()<<endl;
}