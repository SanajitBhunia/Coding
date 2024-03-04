#include<iostream>
using namespace std;

class Sum{
    public:
     void add(int x,int y){
        cout<<x+y<<endl;
    }
    void add(int x,int y,int z){
        cout<<x+y+z<<endl;
    }
    void add(double x,double y){
        cout<<x+y<<endl;
    }



};

int main(){
    Sum s1;
    s1.add(4,5);
    s1.add(2,3,4);
    s1.add(4.5,2.08);

    return 0;
}

