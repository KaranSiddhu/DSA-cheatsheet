#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"


void solution(){
  int n, k;
  cin >> n >> k;

  int ans = n/__gcd(n,k);

  cout << ans << el;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


  int t;
  cin >> t;
  while (t--)
    solution();

  return 0;
}