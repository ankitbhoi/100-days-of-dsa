#include<bits/stdc++.h>
using namespace std;

int maxele(int arr[],int n,int maxi){
    if(n<=-1){
        return maxi;
    }

    maxi = max(maxi,arr[n]);
    return maxele(arr,n-1,maxi);
}

void findMax(int arr[], int n, int i, int& maxi) {
    if (i >= n) {
        return;
    }
    if (arr[i] > maxi) {
        maxi = arr[i];
    }
    findMax(arr, n, i + 1, maxi);
}

//REASON WHY INT& IS BEING USED
// if not returned it will delete its existence and ultimately will have the same infinite value in the variable

// but if sent by reference a the pointer is deleted and the value in the memory location remains the same 

int main(){
    int arr[]={0,7,1,3,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int maxi=INT_MIN;
    
    cout<<maxele(arr,n-1,maxi)<<endl;

    findMax(arr,n,0,maxi);
    cout<<maxi<<endl;
return 0;
}