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

const int M = 1e9 + 7;
const long long INF = LLONG_MAX >> 1;

// Binary Exponentiation : (logn, logn)
int power(int a, int b)
{
  if (b == 0)
    return 1;

  int t = power(a, b / 2); // calculate one t, not t = p(a,b/2)*p(a,b/2);
  if (b % 2 == 0)
    return t * t;
  else
    return t * t * a;
}

// Modular Exponentiation : (logn, logn)
int power(int a, int b)
{
  if (b == 0)
    return 1;

  a = a % M;

  int t = power(a, b / 2);
  if (b % 2 == 0)
    return (t * t) % M;
  else
    return ((t * t) % M * a) % M;
}

int main()
{
  fast;

  cout << power(2, 4);

  return 0;
}