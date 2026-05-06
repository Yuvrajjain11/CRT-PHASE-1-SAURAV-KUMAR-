#include<iostream>
using namespace std;
class student
{
    //Data members
    public:
    string name;
    int rollNo;
    // Default constructor
    student(){
        name = "Yuvraj";
        rollNo = 10;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Default constructor is called"<<endl;
    }
};
int main()  
{
    student s1; 
    s1.show(); 
    
    return 0;
}
