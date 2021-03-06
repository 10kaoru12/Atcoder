#include <bits/stdc++.h>

#define REP(i, x, n) for (int i = x; i < (int)(n); i++)
#define rep(i, n) REP(i, 0, x);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int lcm(int a, int b) { return a * b / gcd(a, b); }

int main(void) {
  string a, b, c;
  cin >> a >> b >> c;
  transform(all(a), a.begin(), ::toupper);
  transform(all(b), b.begin(), ::toupper);
  transform(all(c), c.begin(), ::toupper);
  char aa = a.at(0);
  char bb = b.at(0);
  char cc = c.at(0);
  cout << aa << bb << cc << endl;
  return 0;
}