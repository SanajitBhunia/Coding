#include<iostream>
using namespace std;

class Fruit{
public:
    string name;
    string colour;
};

int main(){
    Fruit o1;
    o1.name="Mango";
    o1.colour="Yellow";

    //Object Pointer
    Fruit *o2=new Fruit();
    o2->name="Apple";
    o2->colour="Red";


    cout<<o1.name<<"-"<<o1.colour<<endl;
    cout<<o2->name<<"-"<<o2->colour<<endl;

}