//single inheritance
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
class B:public A{
    public:
    int j;
    void get(){
        cout<<"Enter j: ";
        cin>>j;
    }
    void show(){
        cout<<"the value of i and j is: "<<i<<","<<j<<endl;
    }
};
int main(){
    B f;
    f.set();
    f.get();
    f.show();
    return 0;
}
