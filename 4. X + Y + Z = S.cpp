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

  int s, k, c = 0;
  cin >> k >> s;
  for (int x = 0; x <= k; x++)
  {
    for (int y = 0; y <= k; y++)
    {
      int z = s - x - y;
      if (z >= 0 and z <= k)
      {
        c++;
      }
    }
  }
  cout << c;

  return 0;
}