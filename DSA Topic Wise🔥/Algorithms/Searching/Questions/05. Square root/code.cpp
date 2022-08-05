#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Input -
1
11
Output -
3
*/

// Time Complexity : O(log n) 
// Auxiliary Space : O(1) 
int solution(){
  int x;
  cin >> x;

  int l = 1, r = x, ans = 0;

  while(l <= r){
    int mid = (l+r)/2;
    if((mid * mid) == x)
      return ans = mid;
    else if((mid*mid) > x)
      r = mid - 1;
    else{
      l = mid + 1;
      ans = mid;
    }

  }
  return ans;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
    cout << "Solution - " <<solution();

  return 0;
}