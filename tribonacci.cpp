#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define rep(i, n) for (int i = 1; i <= n; i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define pb push_back
int tribonacci(int n)
{
    int T[4];
    T[0] = 0;
    T[1] = 1;
    T[2] = 1;
    for (int i = 3; i <= n; i++)
        T[i % 4] = T[(i - 1) % 4] + T[(i - 2) % 4] + T[(i - 3) % 4];
    return T[n % 4];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    scanf("%d", &tc);
    cout << tribonacci(tc) << '\n';
    return 0;
}