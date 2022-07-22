#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

//Time Complexity : O(n^2)
// void solution(){
//   int n = 7;
//   int a[n] = {2, 3, 10, 6, 4, 8, 1};

//   int ans = 0;
//   for (int i = 0; i < n; i++){
//     for (int j = i+1; j < n; j++){
//       if((a[j] - a[i]) > ans)
//         ans = a[j] - a[i];
//     }
//   }
//   cout << ans;
// }

//Time Complexity : O(n)
void solution(){
  int n = 7;
  int a[n] = {2, 3, 10, 6, 4, 8, 1};

  int min = a[0];
  int max_diff = a[1] - a[0];

  for (int i = 1; i < n; i++){
    if((a[i] - min) > max_diff)
      max_diff = a[i] - min;

    if(a[i] < min)
      min = a[i];
  }
  cout << max_diff;
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
