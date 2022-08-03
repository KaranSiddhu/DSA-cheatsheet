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
0 0 0 1 1 1 1 

Output -
4
*/

int lastOccurrence(int *arr, int start, int end, int x){
  int ans = -1;
  while (start <= end){
    int mid = (start + end)/2;

    if(arr[mid] < x)
      start = mid + 1;
    else{
      ans = mid;
      start = mid + 1;
    }
  }
  return ans;
}

int firstOccurrence(int *arr, int start, int end, int x){
  int ans = -1;
  while (start <= end){
    int mid = (start + end)/2;

    if(arr[mid] < x) 
      start = mid+1;
    else{
      ans = mid;
      end = mid - 1;
    } 
  }
  return ans;
}

// Time Complexity : O(log n) 
// Auxiliary Space : O(1) 
int solution(int *arr, int start, int end){
  int x = 1;

  int first = firstOccurrence(arr, start, end, x);

  if(first == -1)
    return 0;
  else 
    return (lastOccurrence(arr, start, end, x) - first + 1);
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

    cout << "Solution -> " << solution(arr, 0, n - 1) << el;
  }

  return 0;
}