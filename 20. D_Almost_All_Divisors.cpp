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

const int MOD = 1e9 + 7;
const long long INF = LLONG_MAX >> 1;

signed main()
{
  fast;

  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
      ll x;
      cin >> x;
      a.push_back(x);
    }
    sort(a.begin(), a.end());
    ll num = a[0] * a[n - 1];

    vector<ll> b;
    for (ll i = 2; i * i <= num; i++)
    {
      if (num % i == 0)
      {
        if (i == num / i)
          b.push_back(i);
        else
        {
          b.push_back(i);
          b.push_back(num / i);
        }
      }
    }
    sort(b.begin(), b.end());
    if (a == b)
    {
      cout << num << nline;
    }
    else
      cout << -1 << nline;
  }

  return 0;
}