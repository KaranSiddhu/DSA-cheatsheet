#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Input -
1
7
20
1 10 10 10 20 20 40

Output -
5
*/

// Time Complexity : O(log n) 
// Auxiliary Space : O(1) 
int solution(int *arr, int start, int end, int x){
  int ans = -1;

  return ans;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--){
    int n, x;
    cin >> n >> x;

    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    cout << "Solution -> " << solution(arr, 0, n-1, x) << el;
  }

  return 0;
}