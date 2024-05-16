#include <bits/stdc++.h>
using namespace std;

#define nline '\n'
#define ll long long
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

signed main()
{
  fast;

  ll x;
  cin >> x;

  ll ans = LLONG_MAX;

  for (ll i = 1; i * i <= x; i++)
  {
    if (x % i == 0)
    {
      ll g = __gcd(i, x / i);
      if (g == 1)
      {
        ans = min(ans, max(i, x / i));
      }
    }
  }

  cout << ans << " " << x / ans << nline;

  return 0;
}