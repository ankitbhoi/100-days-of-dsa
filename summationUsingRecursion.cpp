//my approach
// #include<bits/stdc++.h>
// using namespace std;

// int sum=0;
// void f(int i,int n){
//     if(i>n){
//         return;
//     }
//     sum+=i;
//     f(i+1,n);
    
// }

// int main(){
//     int n=3;
//     f(1,n);
//     cout<<sum;

//     return 0;
// }

// //striver based-- parameterised
// #include<bits/stdc++.h>
// using namespace std;


// void f(int n,int sum){
//     if(n<0){
//         cout<<sum;
//         return;
//     }
//     f(n-1,sum+n);
    
// }

// int main(){
//     int n=3;
//     int sum=0;
//     f(n,sum);
    
//     return 0;
// }

//striver based--functional way
#include<iostream>
using namespace std;

int f(int n){
    if(n==0){
        return 0;
    }
    return n+f(n-1);
}

int main(){
    int n=3;
    cout<<f(n);

    return 0;
}