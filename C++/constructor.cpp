#include<iostream>
using namespace std;

class Rectangle{
    public:
        int l;
        int b;

    //1.Default Constructor
    Rectangle(){
        l=0;
        b=0;
    }

    //2.Parameterized constructor
    Rectangle(int x,int y){
        l=x;
        b=y;
    }

    //3.Copy Constructor
    Rectangle(Rectangle&r){
        l=r.l;
        b=r.b;
    }
    //Destructor
    ~Rectangle(){
        cout<<"Destructor is called"<<endl;
    }
};

int main(){
    Rectangle *r1=new Rectangle();
    cout<<"Default Constructor: "<<r1->l<<" "<<r1->b<<endl;
    delete r1;

    Rectangle r2(3,4);
    cout<<"Parameterized Constructor: "<<r2.l<<" "<<r2.b<<endl;

    Rectangle r3=r2;
    cout<<"Copy Constructor: "<<r3.l<<" "<<r3.b<<endl;

 
}