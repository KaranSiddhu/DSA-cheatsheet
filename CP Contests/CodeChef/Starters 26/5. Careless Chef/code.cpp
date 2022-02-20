#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

void solution(){
  int n;
  cin >> n;
  int sum = 0;
  for(int i = 0; i < 2*n; i++){
    int b;
    cin >> b;
    sum += b;
  }

  cout << ((sum % 2 == 0) ? "YES" : "NO" ) << el;

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