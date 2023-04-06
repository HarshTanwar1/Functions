#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int j = 2;
        for(j;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<" ";
        }
    }
    return 0;
}