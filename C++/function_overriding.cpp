#include<iostream>
using namespace std;


class Parents{
    public:
       virtual void Print(){
            cout<<"Parent Class"<<endl;
        }
        void show(){
            cout<<"PARENT CLASS"<<endl;
        }
};

class Child:public Parents{
    public:
        void Print(){
            cout<<"Child Class"<<endl;
        }
        void show(){
            cout<<"CHILD CLASS"<<endl;
        }

};

int main(){
    Parents *c1;
    Child c2;

    c1=&c2;
    c1->Print();
    c1->show();

    return 0;


}