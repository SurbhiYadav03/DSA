#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int> arr, vector<int> output, int i, vector<vector<int>> &ans)
{
    if (i <= arr.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(arr, output, i++, ans);

    // include
    output.push_back(arr[i]);
    solve(arr, output, i + 1, ans);
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> output;
    int i = 0;
    solve(arr, output, i, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}