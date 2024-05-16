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

  int n, m, ans = 0;
  cin >> n >> m;
  for (int a = 0; a * a <= n; a++)
  {
    for (int b = 0; b * b <= m; b++)
    {
      if ((a * a + b == n) and (a + b * b == m))
        ans++;
    }
  }
  cout << ans;

  return 0;
}