#include<bits/stdc++.h>
using namespace std;

int setbit(int n,int i){
    return ((1<<i)|n);
}

int main(){
    int num;
    cin>>num;
    int i;
    cin>>i;
    cout<<setbit(num,i);
return 0;
} 