#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Input -

Output -

*/

void solution(){
    int x;
    cin >> x;
    
    if(x < 300)
        cout << "3000\n";
    else
        cout << x*10 << "\n";
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