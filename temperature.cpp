#include<iostream>
using namespace std;

void answer(double C){
    double arr[2];
    double K = C+273.15;
    double F = C*1.80 + 32.00;
    arr[0] = K;
    arr[1] = F;
    cout<<arr[0]<< " and "<< arr[1] <<endl;
}

int main(){
    double C;
    cin>>C;
     answer(C);
    return 0;
}