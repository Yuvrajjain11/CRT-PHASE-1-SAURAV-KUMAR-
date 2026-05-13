#include<iostream>
using namespace std;

bool isPOW(int x){
    if(x == 0)
        return false;

    if(x == 1)
        return true;

    if((x % 2 == 0) && isPOW(x / 2))
        return true;

    return false;
}

int main(){
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if(isPOW(x))
        cout << x << " is a power of 2." << endl;
    else
        cout << x << " is not a power of 2." << endl;

    return 0;
}