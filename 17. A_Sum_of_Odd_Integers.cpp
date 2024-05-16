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
    ll n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
      if (k % 2 == 0 and k * k <= n)
      // sum of first k odd natural no. = k*k
      {
        cout << "YES" << nline;
      }
      else
        cout << "NO" << nline;
    }
    else
    {
      if (k % 2 == 1 and k * k <= n)
      {
        cout << "YES" << nline;
      }
      else
        cout << "NO" << nline;
    }
  }

  return 0;
}