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
    ll n;
    cin >> n;
    ll a[n];
    take(a);

    ll c = 0;
    int i;
    for (i = n - 2; i >= 0; i--)
    {
      if (a[i + 1] == 0)
        break;

      while (a[i] >= a[i + 1])
      {
        a[i] /= 2;
        c++;
      }
    }
    if (i >= 0)
      cout << -1 << nline;
    else
      cout << c << nline;
  }

  return 0;
}