#include<bits/stdc++.h>
using namespace std;


int isPrime(int n){
    bool flag=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}

void printPrime(int n){
    for(int i=1;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}

int main()
{
int num;
cout<<"enter the number:-"<<endl;
cin>>num;
printPrime(num);
return 0;
} 