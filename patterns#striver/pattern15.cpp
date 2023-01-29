#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=0;row<n;row++){
        for(char ch='A';ch<'A'+(n-row);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
        
    }

return 0;
} 

// A B C D E 
// A B C D
// A B C
// A B
// A