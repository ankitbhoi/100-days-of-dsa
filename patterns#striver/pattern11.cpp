#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int value=1;
    for(int row=1;row<=n;row++){
        if(row%2!=0){
            value=1;
        }
        else{
            value=0;
        }
        for(int col=1;col<row+1;col++){
            cout<<value;
            if(value){
                value=0;
            }
            else{
                value=1;
            }
            // or alteratively to flip use 
            // value=1-value;
        }
        cout<<endl;
    }
    return 0;
}

// 1
// 01
// 101
// 0101
// 10101