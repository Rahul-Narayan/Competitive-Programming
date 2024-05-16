#include <bits/stdc++.h>
using namespace std;

#define nline '\n'
#define ll long long
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

signed main()
{
  fast;

  string s, s1 = "0";
  cin >> s;
  s = s1 + s1 + s;

  for (int i = s.size() - 1; i >= 0; i--)
  {
    for (int j = i - 1; j >= 0; j--)
    {
      for (int k = j - 1; k >= 0; k--)
      {
        ll n = 100 * (s[k] - '0') + 10 * (s[j] - '0') + (s[i] - '0');

        if (n % 8 == 0)
        {
          cout << "YES" << nline;
          cout << n << nline;
          return 0;
        }
      }
    }
  }
  cout << "NO" << nline;

  return 0;
}