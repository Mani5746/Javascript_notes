#include <bits/stdc++.h>
#define fl(i, n) for (int i = 0; i < n; i++)
#define fl1(i, n) for (int i = 1; i < n; i++)
#define bfl(i, n) for (int i = n - 1; i >= 0; i--)
#define bfl1(i, n) for (int i = n - 1; i >= 1; i--)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define ll long long int
#define INF 1000000000
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a * (b / gcd(a, b))); }
using namespace std;

main()
{
  int a;
  vector<int> v;
  while (cin >> a)
  {
    v.push_back(a);
  }
  int n = v.size();
  int x = n / 3;
  vector<int> damage, troops, category;
  for (int i = 0; i < x; i++)
    damage.push_back(v[i]);
  for (int i = x; i < 2 * x; i++)
    troops.push_back(v[i]);
  for (int i = 2 * x; i < n; i++)
    category.push_back(v[i]);

  int total_size;
  cin >> total_size;

  vector<vector<int>> pq[21];
  for (int i = 0; i < x; i++)
    pq[category[i]].push_back({troops[i], damage[i]});

  vector<vector<vector<int>>> vec;

  for (int i = 0; i < 21; i++)
  { 
    if (pq[i].size() != 0)
    {
      vector<vector<int>> temp;
      for (auto it : pq[i])
      {
        temp.push_back(it);
      }

      vec.push_back(temp);
    }
  }

  for(auto it : pq)
  {
     for(auto itr: it)
     {
       for(auto ele:itr)
       {
        cout<<ele<<" ";
       }
       cout<<"->";
     }

     cout<<"\n";
  }


  return 0;
}