#include<bits/stdc++.h>
using namespace std;

string rev(string& str,int siz,int l,int h){
    if(l<=h){
        swap(str[l],str[h]);
    }
    else{
        return str;
    }
    return rev(str,siz,l+1,h-1);
}

int main(){
    string str = "babor";
    int siz = str.size()-1;
    int l=0;
    int h=siz;
    rev(str,siz,l,h);
    cout<<str<<endl;
return 0;
} 