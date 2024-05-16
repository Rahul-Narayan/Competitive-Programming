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
    int p2 = 0, p3 = 0;
    while (n % 2 == 0)
    {
      p2++;
      n = n / 2;
    }
    while (n % 3 == 0)
    {
      p3++;
      n = n / 3;
    }
    if (n > 1 or p2 > p3)
      cout << -1 << nline;

    else
      cout << (p3 - p2) + p3 << nline;
  }

  return 0;
}
