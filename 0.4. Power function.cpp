#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll power(ll a, ll b)
{
  if (b == 0)
    return 1;

  ll t = power(a, b / 2);
  if (b % 2 == 0)
    return t * t;
  else
    return t * t * a;
}