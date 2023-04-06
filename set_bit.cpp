#include<iostream>
using namespace std;

class solution{
    public:
        int setKthbit(int N,int K){
            return N|(1<<K);
        }
};

int main(){
    int N;
    cin>>N;
    int K;
    cin>>K;
    solution ans;
    int value = ans.setKthbit(N,K);
    cout<<value<<endl;
    
    return 0;
}