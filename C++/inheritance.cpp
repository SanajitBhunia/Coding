#include<iostream>
using namespace std;

class Parents1{
   public:
    Parents1(){
        cout<<"Parent Class 1"<<endl;
    }

};
class Parents2{
    public:
        Parents2(){
            cout<<"Parent class 2"<<endl;
        }
};

class child1:public Parents1{
    public:
    child1(){
        cout<<"Child 1 Class"<<endl;
    }

};
class child2:public Parents1{
    public:
    child2(){
        cout<<"Child 2 class"<<endl;
    }

};
class grandChild:public child1,public child2{
    public:
        grandChild(){
            cout<<"GrandChild class"<<endl;
        }
};


int main(){

    grandChild c1;

    return 0;
}
