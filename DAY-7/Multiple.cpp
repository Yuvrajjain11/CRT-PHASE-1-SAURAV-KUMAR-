#include<iostream>
using namespace std;

// First Base class
class Player{
    public:
        string name;
        void setname(string n){
            name = n;
        }
};

// Second Base class
class Cricketer{
    public:
        int runs;
        void setruns(int r){
            runs = r;
        }
};

// Derived class
class IndianCricketer : public Player, public Cricketer{
    public:
        string state;
        void setstate(string s){
            state = s;
        }
        void show(){
            cout<<"Name: "<<name<<endl;
            cout<<"Runs: "<<runs<<endl;
            cout<<"State: "<<state<<endl;
        }
};

int main(){
    int r;
    cin>>r;
    string s;
    cin>>s;
    IndianCricketer ic1;
    ic1.setname("Virat Kohli");
    ic1.setruns(r);
    ic1.setstate(s);
    ic1.show();
    return 0;
}