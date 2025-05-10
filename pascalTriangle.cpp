#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> memo(numRows);
    for (int i = 0; i < numRows; i++)
    {
        memo[i].resize(i + 1);
        memo[i][0] = 1;
        memo[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            memo[i][j] = memo[i - 1][j - 1] + memo[i - 1][j];
        }
    }
    return memo;
}
int main()
{
    int num;
    cin >> num;
    vector<vector<int>> ans = generate(num);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[num - 1][i] << " ";
    cout << '\n';
}