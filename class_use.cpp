#include<iostream>
using namespace std;
class person{
    char name[30];
    int age;
    public:
    void data(){
    cout<<"Enter the name"<<endl;
    cin>>name;
    cout<<"Enter age"<<endl;
    cin>>age;
}
    void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
};
//agar humne class ke bahar function likhna hai yaa declare karna hai to ese likha jayega 
// void person :: data(){
//     cout<<"Enter the name"<<endl;
//     cin>>name;
//     cout<<"Enter age"<<endl;
//     cin>>age;
// }
// void person :: display(){
//     cout<<"Name: "<<name<<endl;
//     cout<<"Age: "<<age<<endl;
// }
int main(){
    person p;
    p.data();
    p.display();
    return 0;
}