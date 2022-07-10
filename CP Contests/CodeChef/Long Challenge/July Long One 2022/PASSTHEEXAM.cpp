#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

void solution(){
  int A, B, C;
  cin >> A >> B >> C;
  int sum = A + B + C;

  if (A < 10 || B < 10 || C < 10)
    cout << "FAIL" << el; 
  else if (sum >= 100)
    cout << "PASS" << el; 
  else
    cout << "FAIL" << el; 
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