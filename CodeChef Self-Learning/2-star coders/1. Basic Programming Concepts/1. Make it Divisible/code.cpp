#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

void solution(){
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++){
    if (n == 1){
      cout << "3";
      break;
    }

    if (i == 1)
      cout << 1;
    else if (i == n)
      cout << 5;
    else
      cout << 0;
  }

  cout << el;
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