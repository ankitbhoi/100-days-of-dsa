#include<bits/stdc++.h>
using namespace std;

void printDigits(int num){
    int r;
    while(num!=0){
        r=num%10;
        cout<<r<<endl;
        num=num/10;
    }
}

int main(){
    int num;
    cin>>num;
    printDigits(num);
return 0;
} 