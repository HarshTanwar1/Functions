#include<iostream>
using namespace std;

int reverse(int &n){
    int ans = 0;
    while(n){
        int digit = n%10;
        ans = ans*10 + digit;
        n = n/10;
    }
    return ans;

}


int main(){
    int n;
    cin>>n;
    int ans = reverse(n);
    cout<<"reverse number is "<<ans<<endl;
    return 0;
}