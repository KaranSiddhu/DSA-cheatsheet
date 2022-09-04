#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Input -

Output -

*/

void solution()
{
  // Your Code Here!!
  int w, x, y, z;
  cin >> w >> x >> y >> z;

  if (w == x || w == y || w == z)
    cout << "YES\n";
  else if ((x + y + z) == w)
    cout << "YES\n";
  else if ((x + y) == w)
    cout << "YES\n";
  else if ((x + z) == w)
    cout << "YES\n";
  else if ((y + z) == w)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
    solution();

  return 0;
}