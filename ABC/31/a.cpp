#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    int a, b, n;
    cin >> a >> b >> n;
    auto l = lcm(a, b);
    while (l <= n)
    {
        l *= 2;
    }
    return 0;
}