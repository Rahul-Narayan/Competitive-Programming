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

  ll t;
  cin >> t;
  while (t--)
  {
    ll x, k;
    cin >> x >> k;
    ll c = 0;
    while (x % 2 == 0)
    {
      x /= 2;
      c++;
    }
    for (ll i = 3; i * i <= x; i += 2)
    {
      while (x % i == 0)
      {
        x /= i;
        c++;
      }
    }
    if (x > 1)
      c++;

    if (k <= c)
      cout << 1 << nline;
    else
      cout << 0 << nline;
  }

  return 0;
}