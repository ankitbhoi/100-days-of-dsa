// Given an integer N denoting the Length of a line segment. You need to cut the line segment in such a way that the cut length of a line segment each time is either x , y or z. Here x, y, and z are integers.
// After performing all the cut operations, your total number of cut segments must be maximum.

// Note: if no segment can be cut then return 0.

// Example 1:

// Input:
// N = 4
// x = 2, y = 1, z = 1
// Output: 4
// Explanation:Total length is 4, and the cut
// lengths are 2, 1 and 1.  We can make
// maximum 4 segments each of length 1.
// Example 2:

// Input:
// N = 5
// x = 5, y = 3, z = 2
// Output: 2
// Explanation: Here total length is 5, and
// the cut lengths are 5, 3 and 2. We can
// make two segments of lengths 3 and 2.
// Your Task:
// You only need to complete the function maximizeTheCuts() that takes n, x, y, z as parameters and returns max number cuts.

#include<bits/stdc++.h>
using namespace std;
int maximizeTheCuts(int N,int x,int y,int z){
    if(N==0){
        return 0;
    }
    if(N<0){
        return INT_MIN;
    }

    int x1 = maximizeTheCuts(N-x,x,y,z)+1;
    int y1 = maximizeTheCuts(N-y,x,y,z)+1;
    int z1 = maximizeTheCuts(N-z,x,y,z)+1;
    
    return max({x1,y1,z1});
    
}
int main(){
    int N = 5;
    int x = 5, y = 3, z = 2;
    cout<<maximizeTheCuts(N,x,y,z)<<endl;
return 0;
} 