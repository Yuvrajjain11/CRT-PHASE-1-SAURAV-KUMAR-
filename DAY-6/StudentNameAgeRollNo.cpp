/*Write a C++ program to create a class student in which  it shows the data as student name and roll number.*/
#include <iostream>
using namespace std;
class Student
{
    public:
    string name;
    int rollNo;
//member fuction to set the data of student
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
    }
};
int main()
{
    Student s1;
    s1.name="Yuvraj";
    s1.rollNo= 10;
    s1.display();
    return 0;
}