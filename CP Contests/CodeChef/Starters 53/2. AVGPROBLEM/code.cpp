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
  int a, b, c;
  cin >> a >> b >> c;
  double ans = (double)(a + b) / 2;

  if (ans > c)
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