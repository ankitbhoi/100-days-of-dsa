#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int row=0;row<2*n-1;row++){
        //stars
        for(int col=0;col<2*n-1;col++){
            int top=row;
            int left=col;
            int right=(2*n-2)-col;
            int down=(2*n-2)-row;
            cout<<(n-min(min(top,down),min(left,right)));
        }
        cout<<endl;
        cout<<endl;
    }
return 0;
} 

// 555555555

// 544444445

// 543333345

// 543222345

// 543212345

// 543222345

// 543333345

// 544444445

// 555555555