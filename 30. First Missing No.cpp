#include <bits/stdc++.h>
using namespace std;

using vec = vector<long long>;

#define nline '\n'
#define in(x) push_back(x)
#define out() pop_back()
#define ll long long
#define take(arr)     \
  for (auto &i : arr) \
  cin >> i
#define print(x)    \
  for (auto &i : x) \
  cout << i << " "
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)

const int M = 1e9 + 7;

signed main()
{
  fast;

  ll n, m;
  cin >> n >> m;

  ll b[2 * m + 1] = {0}; // to include values from 0 to 2m
  for (ll i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    x = x + m;
    b[x]++;
  }

  for (ll i = 0; i <= 2 * m; i++)
  {
    if (b[i] == 0)
    {
      cout << (i - m) << nline;
      break;
    }
  }

  return 0;
}