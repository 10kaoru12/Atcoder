#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << c / min(a, b) << endl;
    return 0;
}