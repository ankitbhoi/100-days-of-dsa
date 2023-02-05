#include<iostream>
using namespace std;

int f(int n){
    if(n<=1){
        return n;
    }
    int ans1=f(n-1);
    int ans2=f(n-2);
    return ans1+ans2;
    
    //or just return 
    // return f(n-1)+f(n-2);

}

int main(){
    cout<<f(6);
    
    return 0;
}