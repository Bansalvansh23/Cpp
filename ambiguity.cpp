#include<iostream>
using namespace std;
class A{
    public:
    int num;
    void show(){
        cout<<"num A is: "<<num<<endl;
    }
};
class B{
    public:
    int num;
    void show(){
        cout<<"Num b is: "<<num<<endl;
    }
};
class C:public B,public A{
    public:
    int num;
    C(){
        A::num=10;
        B::num=50;
        num=70;
    }
    void show(){
        cout<<"Num c is: "<<num<<endl;
    }
};
int main(){
    C f;
    f.A::show();
    f.B::show();
    f.show();
    return 0;
}