#include<bits/stdc++.h>
using namespace std;

bool palin(string s,int l,int h){
    if(l>h){
        return 1;
    }

    if(s[l]!=s[h]){
        return 0;
    }
    
    return palin(s,l+1,h-1);
}

int main(){
    string s="ankit";
    int l=0;
    int h=s.size()-1;
    cout<<palin(s,l,h)<<endl;
    
return 0;
} 