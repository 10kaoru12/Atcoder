/* include */
#include <bits/stdc++.h>
#include <boost/algorithm/string/trim.hpp>
#include <boost/range/algorithm.hpp>

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
bool chmax(T &a, const T &b) { return (a < b) ? (a = b, 1) : 0; }
template <class T>
bool chmin(T &a, const T &b) { return (b < a) ? (a = b, 1) : 0; }

/* define */
#define REP(i, x, n) for (int i = x; i < (int)(n); ++i)
#define RREP(i, x, n) for (int i = x - 1; i >= (int)(n); --i)
#define rep(i, n) REP(i, 0, n)
#define reps(i, n) REP(i, 1, n + 1)
#define rrep(i, n) RREP(i, n, 0)
#define each(i, n) for (auto &i : n)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define eunique(x)  \
    boost::sort(x); \
    (x).erase(unique(all(x)), (x).end())
#define mp make_pair

/* const */
const int inf = 1e9 + 7;
const int dxl[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dyl[8] = {0, 1, 0, -1, 1, 1, -1, -1};
const int dxs[4] = {1, 0, -1, 0};
const int dys[4] = {0, 1, 0, -1};

/* main */
signed main(void)
{
    int n;
    cin >> n;
    int vmid;
    int amid;
    int cnt = 0;
    vector<int> v(n, 0);
    vector<int> av(3, 0);
    rep(i, n)
    {
        cin >> v[i];
    }
    rep(i, n - 2)
    {
        copy(v.begin() + i, v.begin() + i + 3, av.begin());
        amid = av[1];
        sort(all(av));
        vmid = av[1];
        if (amid == vmid)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
