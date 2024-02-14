// aapko ek string di hui rhegi 
// ek character di hui rhegi 
// aapko uska last occurrence batana hai 
// Examples : 

// Input : str = "geeks", x = 'e'
// Output : 2
// Last index of 'e' in "geeks" is: 2 

// Input : str = "Hello world!", x = 'o'
// Output : 7
// Last index of 'o' is: 7 

#include<bits/stdc++.h>
using namespace std;

int lastOccurrence(string str,char x,int si){
    if(si<0){
            return -1;
        }
        
        if(str[si]==x){
            return si;
        }
        
        return lastOccurrence(str,x,si-1);
}

int main(){
    string str = "geeks";
    char x = 'e';
    int si=str.size()-1; 
    cout<<lastOccurrence(str,x,si)<<endl;
return 0;
} 