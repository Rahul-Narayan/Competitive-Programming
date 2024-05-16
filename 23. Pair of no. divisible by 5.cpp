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

  ll n, m;
  cin >> n >> m;
  ll a[5] = {0}, b[5] = {0};

  for (ll i = 1; i <= n; i++)
    a[i % 5]++;

  for (ll i = 1; i <= m; i++)
    b[i % 5]++;

  ll ans = 0;
  ans += a[0] * b[0];
  ans += a[1] * b[4];
  ans += a[2] * b[3];
  ans += a[3] * b[2];
  ans += a[4] * b[1];

  cout << ans << nline;

  return 0;
}