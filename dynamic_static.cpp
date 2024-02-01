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
        level = ch;
    }
};
int main(){
    system("cls");
    //static allocation 
    hero a;
    a.setHealth(80);
    a.setLevel('b');
    cout<<"Level is: "<<a.level<<endl;
    cout<<"Health is "<<a.getHealth()<<endl;
    
    //dynamic allocation 
    hero *b = new hero;
    b->setHealth(90);
    b->setLevel('A');
    cout<<"Level is: "<<(*b).level<<endl;
    cout<<"Healt is: "<<(*b).getHealth()<<endl;
    //another way of dynamic allocation 
    cout<<"Level is: "<<b->level<<endl;
    cout<<"Health is: "<<b->getHealth()<<endl;
    return 0;
}