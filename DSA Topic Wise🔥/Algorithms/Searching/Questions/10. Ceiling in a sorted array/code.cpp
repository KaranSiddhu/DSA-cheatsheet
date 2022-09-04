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
4
2 3 5 9 16 17 18
Output -
14
*/

// Time Complexity : O(log n) 
// Auxiliary Space : O(1) 
int solution(){
  int n, x;
  cin >> n >> x;
  int arr[n];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int low = 0, high = n-1, ceil = -1;

  while(low <= high){
    int mid = (low+high)/2;

    if(arr[mid] == x)
      return mid;
    else if(x > arr[mid]){
      low = mid+1;
      ceil = arr[mid];
    }
    else
      high = mid-1;
  }

  return ceil;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
    cout << "Ceil - " << solution();

  return 0;
}