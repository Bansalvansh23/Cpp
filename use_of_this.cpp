#include<iostream>
using namespace std;
class employee{
    int id;
    float salary;
    string name;
    public:
    void setData(int id,string name,float salary){
        // this is a keyword which is a pionter which points to object which invokes member function
        this->id=id;
        this->name =name;
        this->salary=salary;
    }
    void display(){
        cout<<"The id is: "<<id<<endl;
        cout<<"The name is: "<<name<<endl;
        cout<<"The salary is: "<<salary<<endl;
    }
};
int main(){
    system("cls");
    employee a;
    a.setData(12,"vansh",100000.0);
    a.display();
    return 0;
}