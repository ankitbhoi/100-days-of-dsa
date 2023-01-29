#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=0;row<n;row++){
        char ch='A'+row;
        for(int col=0;col<row+1;col++){
            cout<<ch<<" ";
        }
        cout<<endl;
        cout<<endl;
    }
return 0;
} 


// A 

// B B

// C C C

// D D D D

// E E E E E