#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Input -
1
5
1 2 3 4 5

Output -
true
*/

// Time Complexity: O(N)
// Space Complexity: O(1)
bool solution(int *arr, int n){
  int low = 0, high = n-1;

  while(low <= high){
    if(arr[low] > arr[high])
      return false;
    
    low++;
    high--;
  }

  return true;
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

    cout << (solution(arr, n) ? "True" : "False");

  }

  return 0;
}