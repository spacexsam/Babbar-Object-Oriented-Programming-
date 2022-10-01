#include<bits/stdc++.h>
// #include"Hero.cpp"
using namespace std;

class Hero{

    public:
    // Properties:
    string name;
    private:
    int health;
    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    }

    int getLevel(){
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

    // creation of Object 
    Hero paul;

    paul.setHealth(80);
    cout<<"Paul health is : " << paul.getHealth() <<endl;
    // using setter
    
    paul.name= ("Paulson");
    // paul.health= 80;
    paul.level='A';

    cout<<"Name is : "<<paul.name<<endl;
    cout<<"Health is : "<< paul.getHealth()<<endl;
    cout<<"Level is : "<< paul.level<<endl;

    cout<<"size : "<<sizeof(paul)<<endl;
    return 0;
}

