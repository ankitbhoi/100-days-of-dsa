// //my way
// #include<iostream>
// using namespace std;

// bool f(string name,int i,int n){
//     if(i>=n){
//         return true;
//     }
//     if(name[i]!=name[n]){
//         return false;
//     }
//     f(name,i+1,n-1);
//     return true;
// }

// int main(){
//     string name="ankit";
//     if(f(name,0,4)){
//         cout<<"palindrome";
//     }
//     else{
//         cout<<"not palindrome";
//     }

//     return 0;
// }

//striver way
#include<iostream>
using namespace std;

int n=5;

bool f(string name,int i){
    if(i>=n/2){
        return true;
    }
    if(name[i]!=name[n-i-1]){
        return false;
    }
    return f(name,i+1);
}

int main(){
    string name="11232";
    if(f(name,0)){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }

    return 0;
}