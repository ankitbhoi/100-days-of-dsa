#include<bits/stdc++.h>
using namespace std;

bool charPresentOrNot(string name,char key,int s){
    if(s==-1){
        return false;
    }
    if(key==name[s]){
        return true;
    }
    return charPresentOrNot(name,key,s-1);
}

int main(){
    string name="ankitghosal";
    int s=name.length();
    char key='a';

    cout<<charPresentOrNot(name,key,s-1)<<endl;
return 0;
} 