#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=0;row<n;row++){
        for(char ch='A';ch<='A'+row;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

return 0;
} 

// A         
// A B       
// A B C     
// A B C D   
// A B C D E 