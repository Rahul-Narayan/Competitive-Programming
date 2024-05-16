#include <bits/stdc++.h>
using namespace std;

#define nline '\n'
#define ll long long
#define v(i) vector<long long> v
#define take(arr)     \
  for (auto &i : arr) \
  cin >> i
#define print(arr)    \
  for (auto &i : arr) \
  cout << i << " "
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)

const int M = 1e9 + 7;
const long long INF = LLONG_MAX >> 1;

signed main()
{
  fast;

  ll t;
  cin >> t;
  while (t--)
  {
    ll a, b;
    cin >> a >> b;

    if (b == 1)
      cout << "NO" << nline;

    else
    {
      cout << "YES" << nline;
      cout << (a * b) << " " << a * (b + 1) << " " << a * (2 * b + 1) << nline;
    }
  }

  return 0;
}
