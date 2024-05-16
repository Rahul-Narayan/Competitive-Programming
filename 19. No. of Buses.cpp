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
    ll rem1 = n % 4;
    ll rem2 = n % 6;

    // if no. of wheels = 2, => No bus.
    if (rem2 == 1 or rem2 == 3 or rem2 == 5 or n == 2)
    {
      cout << -1 << nline;
      continue;
    }
    else if (rem2 == 0)
      cout << n / 6 << " ";
    else if (rem2 == 2 or rem2 == 4)
      cout << n / 6 + 1 << " ";

    if (rem1 == 0 or rem1 == 2)
      cout << n / 4 << " ";
    cout << nline;
  }

  return 0;
}