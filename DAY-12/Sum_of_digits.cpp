#include<iostream>
using namespace std;
int sumofdigits(int x){
    // Base Case
    if(x==0)
        return 0;
        return(x%10) + sumofdigits(x/10);
}
int main(){
    int n;
    cin>>n;
    cout<<"Sum of digits of "<<n<<" is "<<sumofdigits(n)<<endl;
    return 0;
}
