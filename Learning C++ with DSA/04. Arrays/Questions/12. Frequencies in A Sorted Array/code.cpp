#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

//Time Complexity: O(N)
void solution(){
  int n = 6;
  int a[n] = {10, 10, 10, 25, 30, 30};
  
  int ans = 1;
  for (int i = 1; i < n; i++){
    if(a[i] == a[i-1]){
      ans++;
    }else{
      cout << a[i-1] << " - " << ans << el;
      ans = 1;
    }
  }
  cout << a[n-1] << " - " << ans << el;
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
