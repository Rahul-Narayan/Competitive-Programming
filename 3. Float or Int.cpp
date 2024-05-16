#include <bits/stdc++.h>
using namespace std;

int main()
{
  float a;
  cin >> a;
  if (a > floor(a))
  {
    cout << "float" << " " << floor(a) << " " << setprecision(3) << a - floor(a);
  }
  else
  {
    cout << "int" << " " << a;
  }

  return 0;
}