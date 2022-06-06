#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
1
6
-5 4 6 -3 4 -1
*/

//Using brute force approach ,Time Complexity: O(n^2)
/*ll maxSubarraySum(int arr[], int n){
  ll maxSum = LONG_LONG_MIN;

  for (int i = 0; i < n; i++){
    ll tempSum = arr[i];

    for (int j = i + 1; j < n; j++){
      tempSum += arr[j];

      if (tempSum > maxSum)
        maxSum = tempSum;
    }
  }

  return maxSum;
}*/

ll maxSubarraySum(int arr[], int n){
  ll maxSum = LONG_LONG_MIN;
  ll currSum = 0;
  
  for (int i = 0; i < n; i++){
    currSum += arr[i];
    
    if(currSum > maxSum)
      maxSum = currSum;
      
    if(currSum < 0)
      currSum = 0;
  }
  
  return maxSum;
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

    cout << "Solution - " << maxSubarraySum(arr, n) << el;
  }

  return 0;
}