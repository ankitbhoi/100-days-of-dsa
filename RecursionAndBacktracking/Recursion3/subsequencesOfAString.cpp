#include<bits/stdc++.h>
using namespace std;

void subsequences(string str,int i,string output){
    if(i>=str.size()){
        cout<<output<<endl;
        return;
    }

    
    subsequences(str,i+1,output);
    
    output.push_back(str[i]);
    subsequences(str,i+1,output);
}

int main(){
    string str="abc";
    
    subsequences(str,0,"");
return 0;
} 