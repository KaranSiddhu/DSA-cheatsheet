#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Sample Input 
4
20 12
10 100
10 9
20 9
Sample Output 
2
0
1
3
*/

void solution(){
  int n, x;
  cin >> n >> x;

  if (n > x){
    int diff = n - x;
    if (diff % 4 == 0)
      cout << (diff / 4) << el;
    else
      cout << ((diff / 4) + 1) << el; 
  }
  else
    cout << 0 << el;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
    solution();

  return 0;
}