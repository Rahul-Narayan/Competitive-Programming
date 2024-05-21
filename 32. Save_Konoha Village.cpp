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

  ll t;
  cin >> t;
  while (t--)
  {
    ll n, z;
    cin >> n >> z;
    multiset<ll, greater<>> m;
    for (ll i = 0; i < n; i++)
    {
      ll a;
      cin >> a;
      m.insert(a);
    }

    ll c = 0;
    while (z > 0 and m.size() > 0)
    {
      ll a = *m.begin();
      z = z - a;
      c++;
      m.erase(m.begin());
      a = a / 2;
      if (a > 0)
        m.insert(a);
    }
    if (z > 0)
      cout << "Evacuate" << nline;
    else
      cout << c << nline;
  }

  return 0;
}