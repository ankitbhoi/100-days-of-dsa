#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[n]={0,1,0,1,0};
    int s=0;
    int e=n-1;
    while(s<e){
        if(arr[s]==1){
            if(arr[e]==0){
                swap(arr[s],arr[e]);
            }
            e--;
        }
        else{
            s++;
        }
    }
    for(auto i:arr){
        cout<<i<<endl;
    }
return 0;
} 