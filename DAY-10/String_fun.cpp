#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "Hello";
    string str2 = "World";

    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
    int n = str1.length();
    cout << "Length of String 1: " << n << endl;
    int m = str2.length();
    cout << "Length of String 2: " << m << endl;

    return 0;
}