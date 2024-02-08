//Multiple inheritance 
#include<iostream>
using namespace std;
class A{
    public:
    int i;
    void set(){
        cout<<"Enter i: ";
        cin>>i;
    }
};
class B{
    public:
    int j;
    void get(){
        cout<<"Enter j: ";
        cin>>j;
    }
};
class C:public B,public A{
    public:
    void show(){
        cout<<"Value of i is: "<<i<<endl;
        cout<<"Value of j is: " <<j<<endl;
    }
};
int main(){
    C f;
    f.set();
    f.get();
    f.show();
    return 0;
}