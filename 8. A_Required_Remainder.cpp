#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline '\n'
#define f(i, a, b) for (int i = a; i < b; i++)

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    ll x, y, n;
    cin >> x >> y >> n;
    ll rem = n % x;

    if (rem >= y)
      cout << (n - (n % x - y)) << nline;
    else
      cout << (n - ((x - y) + (n % x))) << nline;
  }

  return 0;
}