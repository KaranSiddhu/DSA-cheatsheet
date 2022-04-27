#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

void solution(){
  int a, b;
  cin >> a >> b;

  int e1 = a * 10;
  int e2 = b * 5;

  if (e1 == e2)
    cout << "ANY" << el;
  else if (e1 > e2)
    cout << "FIRST" << el;
  else
    cout << "SECOND" << el;
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