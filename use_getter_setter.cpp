#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }
};
int main(){
    system("cls");
    hero ramesh;
    cout<<"Ramesh health is: "<<ramesh.getHealth()<<endl;
    ramesh.setHealth(70);
    ramesh.level='A';
    cout<<"Health is: "<<ramesh.getHealth()<<endl;
    cout<<"Level is: "<<ramesh.level<<endl;
    return 0;
}