#include<bits/stdc++.h>
using namespace std;

int countStairs(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 1;
    }
    int ans = countStairs(n-1) + countStairs(n-2);
    return ans;
}
int main(){
    cout<<countStairs(9)<<endl;
return 0;
} 