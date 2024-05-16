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

  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int i = s.find("11");
    int j = s.rfind("00");

    if (i != -1 and j != -1 and i < j)
      cout << "NO" << nline;
    else
      cout << "YES" << nline;
  }

  return 0;
}