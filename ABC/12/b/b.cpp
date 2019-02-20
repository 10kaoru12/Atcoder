#include <bits/stdc++.h>

#define REP(i, x, n) for (int i = x; i < (int)(n); ++i)
#define RREP(i, x, n) for (int i = x - 1; i >= (int)(n); --i)
#define rep(i, n) REP(i, 0, n)
#define Rep(i, n) REP(i, 1, n)
#define rrep(i, n) RREP(i, n, 0)
#define RRep(i, n) RREP(i, n, 1)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1e9 + 7

using namespace std;
using namespace chrono;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

int main(void)
{
    int n = 3661;
    cin >> n;
    int m = (n / 60) / 60;
    if (m / 10 == 0)
    {
        cout << 0;
    }
    cout << m << ':';
    m = (n / 60) % 60;
    if (m / 10 == 0)
    {
        cout << 0;
    }
    cout << m << ':';
    m = (n % 60) % 60;
    if (m / 10 == 0)
    {
        cout << 0;
    }
    cout << m << endl;
    return 0;
}