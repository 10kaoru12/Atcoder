#include <bits/stdc++.h>

#define REP(i, x, n) for (int i = x; i < (int)(n); ++i)
#define RREP(i, x, n) for (int i = x - 1; i >= (int)(n); --i)
#define rep(i, n) REP(i, 0, n)
#define rrep(i, n) RREP(i, n, 0)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1e9 + 7

using namespace std;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

int main(void)
{
    int n;
    int max = 0;
    int cnt = 0;
    cin >> n;
    vector<string> s(n);
    rep(i, n)
    {
        cin >> s[i];
    }
    string ans = s[0];
    sort(all(s));
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            ++cnt;
            if (max < cnt)
            {
                max = cnt;
                ans = s[i];
            }
        }
        else
        {
            cnt = 0;
        }
    }
    cout << ans << endl;
    return 0;
}