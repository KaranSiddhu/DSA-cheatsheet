#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

void solution(){
  int x, y, n, r;
  cin >> x >> y >> n >> r;
  if ((x * n) > r){
    cout << "-1" << el;
    return;
  }

  if ((y * n) < r){
    cout << 0 << " " << n << el;
  }
  else{
    int j = (r - (x * n)) / (y - x);
    int i = n - j;

    cout << i << " " << j << el;
  }
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