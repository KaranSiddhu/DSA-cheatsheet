#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Sample Input
4
10 100 200
3 10 100
1000 1000 2200
100 100 100

Sample Output
20000
300
2040000
10000
*/

void solution(){
  int maxT, maxN, sumN;
  cin >> maxT >> maxN >> sumN;
  int n = (maxT > (sumN / maxN)) ? (sumN / maxN) : maxT;
  ll ans = 0;

  int i = 0;
  for (; i < n; i++){
    ans += maxN * maxN;
  }

  int diff = sumN - maxN * (sumN / maxN);

  if (diff && (maxT > i))
    ans += diff * diff;

  cout << ans << el;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // int t;
  // cin >> t;
  // while (t--)
  //   solution();

  cout << "ans -> " <<(6/4);

  return 0;
}