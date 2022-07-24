#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

int solution(int n){

  if(n <= 9) return n;

  return n%10 + solution(n/10);
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