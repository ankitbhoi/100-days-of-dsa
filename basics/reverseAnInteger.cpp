#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int rever=0;
    int r;
    while(n!=0){
        r=n%10;
        rever=(rever*10)+r;
        n=n/10;
    }
    return rever;
    
}
int main(){
    int num;
    cin>>num;
    cout<<reverse(num);
return 0;
} 