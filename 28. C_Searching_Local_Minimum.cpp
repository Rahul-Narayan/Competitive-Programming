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

const ll M = 1e9 + 7;

unordered_map<ll, ll> mp;
ll n;

ll query(ll i)
{
  if (mp.find(i) != mp.end())
    return mp[i];

  if (i == 0 or i == n + 1)
    return LLONG_MAX;

  cout << "? " << i << endl;
  ll v;
  cin >> v;
  return mp[i] = v;
}

signed main()
{
  cin >> n;

  ll l = 0, r = n + 1;
  while (r - l > 1)
  {
    ll m = (l + r) / 2;
    (query(m) < query(m + 1)) ? (r = m) : (l = m);
  }

  cout << "! " << r << endl;

  return 0;
}