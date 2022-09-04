#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Input -
1
2 5 1 3 0

Output -
5
*/

// Time Complexity: O(N)
// Space Complexity: O(1)
int solution(int *arr, int n){
  int max = arr[0];

  for (int i = 1; i < n; i++)
    if(arr[i] > max)
      max = arr[i];
  
  return max;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    cout << "Solution - " << solution(arr, n);

    cout << el;
  }

  return 0;
}