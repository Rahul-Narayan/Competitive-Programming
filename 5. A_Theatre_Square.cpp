#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline '\n'
#define f(i, a, b) for (int i = a; i < b; i++)

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  ll n, m, a;
  cin >> n >> m >> a;
  cout << ((n + a - 1) / a) * ((m + a - 1) / a);

  return 0;
}