#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << "Worse" << endl;
    else
        cout << "Better" << endl;
    return 0;
}