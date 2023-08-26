#include<bits/stdc++.h>
using namespace std;
int main(){

    int n = 4;

    bool flag=true;
    for(int i = 2; i < n ; i++){
        if( n%i==0 ){
            flag=false;
        }
    }
    cout<<"Prime: "<<flag<<endl;
return 0;
} 