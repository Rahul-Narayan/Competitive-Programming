#include <bits/stdc++.h>
using namespace std;

void sieve(vector<int> &v, int n)
{
  bool prime[n + 1];
  fill(prime, prime + n, 1);

  prime[0] = prime[1] = 0;

  for (int i = 2; i * i <= n; i++)
  {
    if (prime[i])
    {
      for (int j = i * i; j <= n; j += i)
        prime[j] = 0;
    }
  }
  for (int i = 2; i <= n; i++)
    if (prime[i])
      v.push_back(i);
}
