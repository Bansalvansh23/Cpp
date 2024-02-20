#include<iostream>
using namespace std;
class A{
    public:
    class B{
        public:
        int a;
        void putdata(int n){
            a=n;
        }
        void getdata(){
            cout<<"The value of a is: "<<a<<endl;
        }
    };
};
int main(){
    A::B f;
    f.putdata(10);
    f.getdata();
    return 0;
}