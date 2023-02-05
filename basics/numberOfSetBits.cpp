#include<bits/stdc++.h>
using namespace std;

void setbits(int num){
    int count=0;
    while(num){
        int val=num&1;
        count=count+val;
        num=num>>1;
    }
    cout<<count;
}

int main(){
    int num;
    cin>>num;
    setbits(num);
return 0;
} 