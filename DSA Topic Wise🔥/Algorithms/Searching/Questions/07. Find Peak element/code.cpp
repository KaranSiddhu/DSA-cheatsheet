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
5 20 40 30 20 50 60
Output -
40
*/

// Time Complexity : O(log n) 
// Auxiliary Space : O(1) 
int solution(){
  int n;
  cin >> n;
  int arr[n];
  
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int low = 0, high = n-1, ans = -1;

  while(low <= high){
    int mid = (low + high)/2;

    if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]) 
      return ans = arr[mid];
    
    if(arr[mid - 1] >= arr[mid]){
      high = mid - 1;
    }else{
      low = mid + 1;
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
   cout << "Ans - " << solution();

  return 0;
}