#include<iostream>
using namespace std;

int main(){
    int n=5;
    int result=1;
    while(n>0){
        result*=n;
        n--;
    }
    cout<<result<<endl;

    return 0;
}