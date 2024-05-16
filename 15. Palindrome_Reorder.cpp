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

  string s;
  cin >> s;
  int N = s.length();
  string ans(N, ' ');

  // use freq array instead of map, as m[x]++ => logN, freq[x]=1 => O(1)
  int freq[26] = {};
  for (int i = 0; i < N; i++)
  {
    freq[s[i] - 'A'] += 1;
  }

  int cnt = 0;
  for (int i = 0; i < 26; i++)
  {
    if (freq[i] % 2 != 0)
    {
      cnt += 1;
    }
  }

  if (cnt > 1)
  {
    cout << "NO SOLUTION" << nline;
    return 0;
  }

  int left = 0, right = N - 1;
  for (int i = 0; i < N; i++)
  {
    if (freq[s[i] - 'A'] % 2 == 1)
    {
      ans[N / 2] = s[i];
      freq[s[i] - 'A'] -= 1;
    }
    while (freq[s[i] - 'A'] > 0)
    {
      ans[left++] = ans[right--] = s[i];
      freq[s[i] - 'A'] -= 2;
    }
  }
  cout << ans << nline;

  return 0;
}