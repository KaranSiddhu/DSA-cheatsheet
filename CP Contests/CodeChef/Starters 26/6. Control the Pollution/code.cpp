#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

void solution(){
  int n,x,y;
  cin >> n >> x >> y;

  int ans = INT32_MAX;

  for(int bus = 0; bus <= ceil(n / 100.0); bus++){
    int cars = max((double)0, ceil((n-bus*100) / 4.0));
    int smoke = bus * x + cars * y;
    ans = min(ans, smoke);
  }

  cout << ans << el;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while(t--)
    solution();
  
  return 0;
}