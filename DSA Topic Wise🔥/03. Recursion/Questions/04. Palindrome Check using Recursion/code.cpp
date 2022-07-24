#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

bool solution(string s, int L, int R){
  
  if(L >= R) return true;
  
  if(s[L] != s[R]) return false;

  return solution(s, L+1, R-1);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--){
    string s;
    cin >> s;

    cout << (solution(s, 0, s.length() - 1) ? "Yes" : "No");
  }

  return 0;
}