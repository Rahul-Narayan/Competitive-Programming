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

  ll y;
  cin >> y;
  y++;
  while (1)
  {
    string s = to_string(y);
    set<char> st;
    for (int i = 0; i < 4; i++)
    {
      st.insert(s[i]);
    }
    if (st.size() == s.size())
    {
      cout << y;
      break;
    }
    y++;
  }
  return 0;
}