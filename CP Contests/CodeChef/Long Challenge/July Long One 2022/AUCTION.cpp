#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Sample Input
4
200 100 400
155 1000 566
736 234 470
124 67 2
Sample Output
Charlie
Bob
Alice
Alice
*/

void solution(){
  int A, B, C;
  cin >> A >> B >> C;

  if (A >= B && A >= C)
    cout << "Alice" << el;
  else if (B >= A && B >= C)
    cout << "Bob" << el;
  else
    cout << "Charlie" << el;
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