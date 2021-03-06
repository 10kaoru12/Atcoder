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
        ios::sync_with_stdio(false);
    }
} fast;

/* define */
#define REP(i, x, n) for (int i = x; i < (int)(n); ++i)
#define RREP(i, x, n) for (int i = x - 1; i >= (int)(n); --i)
#define rep(i, n) REP(i, 0, n)
#define reps(i, n) REP(i, 1, n + 1)
#define rrep(i, n) RREP(i, n, 0)
#define each(i, n) for (auto &i : n)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define eunique(x) (x).erase(unique(all(x), (x).end()))
#define int long long
#define MAX 1e9 + 7

/* func */
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

/* main */
signed main(void)
{
    // auto start = chrono::system_clock::now();
    // int n;
    // int x;
    // cin >> n >> x;
    // int cnt = 0;
    // vector<int> v(n);
    // rep(i, n)
    // {
    //     cin >> v[i];
    // }
    // const int size = CHAR_BIT * sizeof(x);
    // bitset<size> bs(x);
    // rep(i, size)
    // {
    //     if (bs[i])
    //     {
    //         cnt += v[i];
    //     }
    // }
    // cout << cnt << endl;
    // auto end = chrono::system_clock::now();
    // auto sec = chrono::duration_cast<chrono::microseconds>(end - start).count();
    // cout << sec << endl;
    auto start = chrono::system_clock::now();
    int n, x;
    int cnt = 0;
    cin >> n >> x;
    rep(i, n)
    {
        int in;
        cin >> in;
        if (x % 2)
        {
            cnt += in;
        }
        x >>= 1;
    }
    cout << cnt << endl;
    auto end = chrono::system_clock::now();
    auto sec = chrono::duration_cast<chrono::microseconds>(end - start).count();
    cout << sec << endl;
    return 0;
}