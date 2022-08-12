#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Input -
1
6
5
10 20 40 60 5 8

Output -
6
*/

// Time Complexity : O(log n) 
// Auxiliary Space : O(1) 
int solution(){
  int n, x;
  cin >> n >> x;
  int arr[n];
  
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  
  int L = 0, R = n-1;

  while(L <= R){
    int mid = (L+R)/2;
    if(x == arr[mid]) return mid;
    if(arr[mid] >= arr[L]){
      if(x >= arr[L] && x <= arr[mid])
        R = mid - 1;
      else
        L = mid + 1;
    }else {
      if(x >= arr[mid] && x <= arr[R])
        L = mid + 1;
      else 
        R = mid - 1;
    }
  }
  return -1;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--){
    cout << "solution - " << solution() << el;
  }

  return 0;
}