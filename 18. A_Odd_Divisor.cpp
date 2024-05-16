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

  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    if ((n & (n - 1)) == 0)
    {
      cout << "NO" << nline;
    }
    else
      cout << "YES" << nline;
  }

  return 0;
}