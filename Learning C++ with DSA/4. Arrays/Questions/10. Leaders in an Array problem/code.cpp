#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

//O(n*n) solution
// void solution(){
//   int n = 7;
//   int a[n] = {7, 10, 4, 3, 6, 5, 2};

//   for (int i = 0; i < 7; i++){
//     int j;
//     for(j = i+1; j < n; j++){
//       if(a[i] < a[j])
//         break;
//     }
//     if(j == n)
//       cout << a[i] << " ";
//   }
// }

//O(n) solution
void solution(){
  int n = 7;
  int a[n] = {7, 10, 4, 3, 6, 5, 2};

  int max = 0;
  for (int i = n-1; i >= 0; i--){
    if(a[i] > max){
      max = a[i];
      cout << max << " ";
    }
  }
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
