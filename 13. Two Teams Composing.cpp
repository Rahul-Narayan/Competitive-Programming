#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)
#define take(arr)     \
  for (auto &i : arr) \
  cin >> i
#define print(arr)    \
  for (auto &i : arr) \
  cout << i << " "
#define nline '\n'
#define f(i, a, b) for (int i = a; i < b; i++)

const int MOD = 1e9 + 7;
const long long INF = LLONG_MAX >> 1;

int main()
{
  fast;

  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll arr[n];
    take(arr);

    map<ll, ll> m;
    for (auto &x : arr)
      m[x]++;

    ll mx = 0;
    for (auto &x : m)
    {
      mx = max(mx, x.second);
    }

    ll diff = m.size();

    if (diff == mx)
    {
      cout << diff - 1 << nline;
    }
    else if (diff > mx)
    {
      cout << min(diff - 1, mx) << nline;
    }
    else
    {
      cout << min(mx - 1, diff) << nline;
    }
  }

  return 0;
}