//Multi-level inheritance 
#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"Hello class A"<<endl;
    }
};
class B:public A{
    public:
    void disp(){
        cout<<"Hello class B"<<endl;
    }
};
class C:public B{
    public:
    void display(){
        cout<<"Hello class C"<<endl;
    }
};
int main(){
    C f;
    f.show();
    f.disp();
    f.display();
    return 0;
}