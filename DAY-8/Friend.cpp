#include<iostream>
using namespace std;
class Area{
    int length;
    int breadth;
    public:
    void setDimensions(int l, int b){
        breadth = b;
        length = l;
    }
    friend void showArea(Area a);
};

void showArea(Area b){
    int area = b.length * b.breadth;
    cout<<"Area: "<<area<<endl;
}
int main(){
    Area a1;
    a1.setDimensions(5, 10);
    showArea(a1);
    return 0;
}