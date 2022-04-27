#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

void solution(){
  int bill;
  cin >> bill;

  int c1 = 100;
  int c2 = bill / 10;

  if(c1 > c2)
    cout << c1 << "\n";
  else
    cout << c2 << "\n";

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
