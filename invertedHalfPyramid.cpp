#include<iostream>
using namespace std;
int main(){
    int n=6;
    for(int row=0;row<n;row++){
        for(int col=6;col>row;col--){
            cout<<"*";
        }
        cout<<endl;
    }
}
// ******
// *****
// ****
// ***
// **
// *