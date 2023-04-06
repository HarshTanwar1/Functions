#include<iostream>
using namespace std;

int facto(int n){
    int f = 1;
    while(n>0){
        f = f*n;
        --n;
    }
    return f;
}

int main(){
    int n;
    cin>>n;
    cout<<"Factorial is "<<facto(n)<<endl;
    return 0;
}