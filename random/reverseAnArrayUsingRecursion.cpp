// //my way
// #include<iostream>
// using namespace std;

// int f(int arr[],int i,int n){
//     if(i>=n){
//         return arr[n];
//     }
//     swap(arr[i],arr[n]);
//     return f(arr,i+1,n-1);
// }

// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[5]={7,2,3,4,1};
//     int n=5;
//     f(arr,0,n-1);
//     printArray(arr,n);

//     return 0;
// }


//striver_way-using single variable;
#include<iostream>
using namespace std;

void f(int arr[],int i,int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    f(arr,i+1,n);
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={6,4,2,1,9};
    int n=5;
    f(arr,0,n);
    printArray(arr,n);

    return 0;
}