#include<iostream>
using namespace std;
class A{
    public:
    int a,b,c;
    int square(){
        b=a*a;
        cout<<"Square of number is: "<<b<<endl;
    }
    int cube(){
        c=a*a*a;
        cout<<"Cube of no. is: "<<c<<endl;
    }
    void input(){
        cout<<"Enter a: ";
        cin>>a;
    }
    int disp(){
        int s=square();
        int d=cube();
    }
};
int main(){
    A obj;
    obj.input();
    obj.disp();
    return 0;
}