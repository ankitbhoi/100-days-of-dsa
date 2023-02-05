#include <bits/stdc++.h>
using namespace std;

void pairSum(vector<int> &arr, int s)
{
    // Write your code here.
    vector<vector<int>> ans;
    // vector<int>v1;
    unordered_map<int, int> mpp;
    for (int i = 0; i < arr.size(); i++)
    {
        if (mpp.find(s - arr[i]) != mpp.end())
        {
            //             v1.push_back(s-arr[i]);
            //             v1.push_back(arr[i]);
            ans.push_back({s - arr[i], arr[i]});
        }
        mpp[arr[i]] = i;
    }
    // return ans;
    //void printArray(vector<vector<int>> ans){
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
                cout << ans[i][j] << " ";
            cout << endl;
        }

    }
//}

// void printArray(vector<vector<int>> ans){
//     for (int i = 0; i < ans.size(); i++) {
//         for (int j = 0; j < ans[i].size(); j++)
//             cout << ans[i][j] << " ";
//         cout << endl;
//     }
// }
int main()
{
    vector<int> arr = {2,-6,2,5,2};
    int s = 4;
    pairSum(arr, s);
    // printArray(ans);
    return 0;
}