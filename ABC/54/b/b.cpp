/* include */
#include <bits/stdc++.h>

/* using */
using namespace std;

/* main constructor */
struct Fast
{
    Fast()
    {
        std::cin.tie(0);
        ios::sync_with_stdio(0);
        //cout << fixed << setprecision(12);
    }
} fast;

/* template */
template <class T>
bool chmax(T &a, const T &b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b)
{
    if (b < a)
    {
        a = b;
        return 1;
    }
    return 0;
}

/* define */
#define REP(i, x, n) for (int i = x; i < (int)(n); ++i)
#define RREP(i, x, n) for (int i = x - 1; i >= (int)(n); --i)
#define rep(i, n) REP(i, 0, n)
#define reps(i, n) REP(i, 1, n + 1)
#define rrep(i, n) RREP(i, n, 0)
#define each(i, n) for (auto &i : n)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define eunique(x) (x).erase(unique(all(x)), (x).end())
#define int long long

/* function */
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

/* const */
const int inf = 1e9 + 7;

/* main */
signed main(void)
{
    int n, m;
    cin >> n >> m;
    vector<string> vn(n);
    vector<string> vm(m);
    rep(i, n)
    {
        cin >> vn[i];
    }
    rep(i, m)
    {
        cin >> vm[i];
    }
    bool flg = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= i + m; j++)
        {
            if (vn[j].find(vm[j]) == string::npos)
            {
                flg = false;
                continue;
            }
            else if (vn[j].find(vm[j]) != string::npos)
            {
                flg = true;
            }
        }
        if (flg == true)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}