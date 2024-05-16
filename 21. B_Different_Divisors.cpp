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

bool isPrime(ll n)
{
  for (ll i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

signed main()
{
  fast;

  ll t;
  cin >> t;
  while (t--)
  {
    ll d;
    cin >> d;
    ll a, b;
    for (ll i = d + 1;; i++)
    {
      if (isPrime(i))
      {
        a = i;
        break;
      }
    }
    for (ll i = a + d;; i++)
    {
      if (isPrime(i))
      {
        b = i;
        break;
      }
    }
    cout << a * b << nline;
    // In soln, it is written like:
    // cout << min((a * b), (a * a * a)) << nline;
    // but always, a*b is the smaller one.
  }

  return 0;
}