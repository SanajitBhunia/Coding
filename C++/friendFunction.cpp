#include<iostream>
using namespace std;

class A{
    int x;
    public:
        A(int y){
            x=y;
        }
    
     friend void Print(A &obj);

};

void Print(A &obj){
    cout<<obj.x<<endl;
}

int main(){
    A obj(5);
    Print(obj);
}