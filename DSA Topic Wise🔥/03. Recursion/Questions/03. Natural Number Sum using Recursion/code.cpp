#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

int solution(int n){
  if(n == 0) return 0;

  return (n+solution(n-1));
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--){
    int n;
    cin >> n;
    cout << solution(n);
  }

  return 0;
}