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

signed main()
{
  fast;

  ll n;
  cin >> n;
  n++;

  auto prodDigit = [](ll n)
  {
    ll ans = 1;
    while (n != 0)
    {
      ans *= n % 10;
      n /= 10;
    }
    return ans;
  };

  ll ans = LLONG_MIN, p = 1;
  while (n != 0)
  {
    ans = max(ans, prodDigit(n * p - 1));
    n /= 10;
    p *= 10;
  }
  cout << ans << nline;

  return 0;
}