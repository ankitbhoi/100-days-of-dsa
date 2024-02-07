#include<bits/stdc++.h>
using namespace std;

void counting(int n){
    if(n==0){
        return; //yeh hamesha likhna zaruri hai.
    }
    cout<<n<<endl;
    counting(n-1);
}

int main(){
    int n;
    cin>>n;
    counting(n);
return 0;
} 

//hamesha return krna zaruri hai jahan koi value na mile return krne ko wahan pe only return likh dena