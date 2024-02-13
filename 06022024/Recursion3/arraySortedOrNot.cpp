#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int s,int i){
    if(i==s){
        return true;
    }
    if(arr[i]<arr[i-1]){
        return false;
    }
    return isSorted(arr,s,i+1);
}

int main(){
    int arr[]={5,3,2,4,9};
    // int arr[]={1,2,3,4,5};
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<isSorted(arr,s,1)<<endl;
return 0;
} 