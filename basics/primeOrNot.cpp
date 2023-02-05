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

int main()
{
int num;
cout<<"enter the number:-"<<endl;
cin>>num;
if(isPrime(num)){
    cout<<"prime"<<endl;
}
else{
    cout<<"not prime"<<endl;
}
return 0;
} 