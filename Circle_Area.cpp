#include<iostream>
using namespace std;

double area(double);

int main(){
    double r;
    cin>>r;
    float ans = area(r);
    cout<<"Area is "<<ans<<endl;
    return 0;
}

double area(double r){
    return (3.14 * r * r);
}