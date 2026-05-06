#include<iostream>
using namespace std;
class Student
{
    private:
    int reg = 100;
    public:
    string name;
    int rollNo;
//member fuction to set the data of student
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Reg No: "<<reg<<endl;
        reg++;    
    }   
};
int main()
{
    Student s1;
    s1.name="Yuvraj";
    s1.rollNo= 10;
    s1.display();
    Student s2;
    s2.name="Rahul";
    s2.rollNo= 20;
    s2.display();
    return 0;
}