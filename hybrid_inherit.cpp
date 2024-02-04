//Hybrid inheritance----> its is the combination of single and multiple inheritance
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
    void set(){
        cout<<" Hello class B"<<endl;
    }
};
class C{
    public:
    void disp(){
        cout<<"Hello class C"<<endl;
    }
};
class D:public C,public B{
    public:
    void display(){
        cout<<"Hello class D"<<endl;
    }
};
int main(){
    system("cls");
    D f;
    f.show();
    f.set();
    f.disp();
    f.display();
}