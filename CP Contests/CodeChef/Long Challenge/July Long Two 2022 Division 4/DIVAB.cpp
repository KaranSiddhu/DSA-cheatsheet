#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

void solution()
{
  int a, b, n;
  cin >> a >> b >> n;

  if (a % b == 0){
    cout << -1 << el;
    return;
  }

  int r = n;

  if (r % a != 0)
    r = r + a - (r % a);
  

  while (r % b == 0)
    r += a;
  

  cout << r << el;
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