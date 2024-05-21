#include <bits/stdc++.h>
using namespace std;

using vec = vector<long long>;

#define nline '\n'
#define in(x) push_back(x)
#define out() pop_back()
#define ll long long
#define take(arr)     \
  for (auto &i : arr) \
  cin >> i
#define print(x)    \
  for (auto &i : x) \
  cout << i << " "
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)

const int M = 1e9 + 7;

signed main()
{
  fast;

  ll noOfChef, noOfMail;
  cin >> noOfChef >> noOfMail;

  map<string, string> chefData;
  for (ll i = 0; i < noOfChef; i++)
  {
    string name, country;
    cin >> name >> country;
    chefData[name] = country;
  }

  // To print the map :
  for (auto m : chefData)
    cout << setw(10) << m.first << " " << m.second << nline;
  cout << nline << "-------------" << nline;

  map<string, ll> chefVotes;
  map<string, ll> countryVotes;

  for (ll i = 0; i < noOfMail; i++)
  {
    string name;
    cin >> name;

    chefVotes[name]++;
    countryVotes[chefData[name]]++;
  }

  for (auto m : chefVotes)
    cout << setw(10) << m.first << "  " << m.second << nline;
  cout << nline << "-------------" << nline;

  for (auto m : countryVotes)
    cout << setw(10) << m.first << "  " << m.second << nline;
  cout << nline << "-------------" << nline;

  ll voteCountry = LLONG_MIN;
  string countryWinner = "";
  for (auto m : countryVotes)
  {
    if (m.second > voteCountry)
    {
      voteCountry = m.second;
      countryWinner = m.first;
    }
  }

  ll voteChef = LLONG_MIN;
  string chefWinner = "";
  for (auto m : chefVotes)
  {
    if (m.second > voteChef)
    {
      voteChef = m.second;
      chefWinner = m.first;
    }
  }

  // cout << nline << "--------------" << nline;

  cout << countryWinner << nline;
  cout << chefWinner << nline;

  return 0;
}