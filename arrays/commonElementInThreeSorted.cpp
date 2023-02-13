// C++ program to print common elements in three arrays
#include <bits/stdc++.h>
using namespace std;

// This function prints common elements in ar1
void findCommon(int A[], int B[], int C[], int n1,
                int n2, int n3)
{
    unordered_map<int, int> m1, m2, m3;
    vector<int> v;
    for (int i = 0; i < n1; i++)
        m1[A[i]]++;
    for (int i = 0; i < n2; i++)
        m2[B[i]]++;
    for (int i = 0; i < n3; i++)
        m3[C[i]]++;

    // for (auto i : m1)
    //     cout << i.first << "   " << i.second<< endl;
    //     for (auto i : m2)
    //     cout << i.first << "   " << i.second<< endl;
    //     for (auto i : m3)
    //     cout << i.first << "   " << i.second<< endl;
    for (int i = 0; i < n1; i++)
    {
        if (m1[A[i]] > 0 && m2[A[i]] > 0 && m3[A[i]] > 0)
        {
            v.push_back(A[i]);
            // Stopping to print the duplicates
            m1[A[i]] = 0;
        }
    }

       for(auto i:v){
        cout<<i<<" ";
       }
}

// Driver code
int main()
{
    int ar1[] = {1, 5, 10, 20, 40, 80};
    int ar2[] = {6, 7, 20, 80, 100};
    int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = sizeof(ar1) / sizeof(ar1[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    int n3 = sizeof(ar3) / sizeof(ar3[0]);

    cout << "Common Elements are ";
    findCommon(ar1, ar2, ar3, n1, n2, n3);
    return 0;
}
