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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    //cout << (((((max(a, b) - min(a, b)) <= d) && ((max(b, c) - min(b, c)) <= d)) || (((max(a, c) - min(a, c))) <= d)) ? "Yes" : "No") << endl;
    cout << (((abs(a - b) <= d) && abs(b - c) <= d) || abs(a - c) <= d ? "Yes" : "No") << endl;
    return 0;
}