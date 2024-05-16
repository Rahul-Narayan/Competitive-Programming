#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline '\n'

void solve()
{
  ll hc, dc, hm, dm, k, d, h;
  cin >> hc >> dc >> hm >> dm >> k >> d >> h;

  for (int i = 0; i <= k; i++)
  {
    // here create new nh and nd, hc = hc + h*i; se galat show kar raha hai.
    ll nh = hc + h * i;
    ll nd = dc + d * (k - i);

    ll timeToKillMonster = (hm + nd - 1) / nd;
    ll timeToKillCharacter = (nh + dm - 1) / dm;

    if (timeToKillMonster <= timeToKillCharacter)
    {
      cout << "YES" << nline;
      return;
    }
  }
  cout << "NO" << nline;
}

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}
