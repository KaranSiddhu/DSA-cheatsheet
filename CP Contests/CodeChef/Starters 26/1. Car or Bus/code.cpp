#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
  int x,y;
  cin >> x >> y;

  cout << ((x > y ? "CAR" : (x == y ? "SAME" : "BIKE")  )) << "\n";
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