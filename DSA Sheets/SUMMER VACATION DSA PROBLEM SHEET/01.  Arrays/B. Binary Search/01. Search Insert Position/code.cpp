#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
1
4
5
1 3 5 6
*/

//Binary search, Time Complexity - O(log n)
int searchInsert(vector<int>& nums, int target) {
  int l = 0, r = nums.size();

  while(l <= r){
    int mid = (l+r)/2;

    if(target == nums[mid]) return mid;

    if(nums[mid] > target)
      r = mid-1;
    else
      l = mid+1;
  }

  return r+1;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--){
    int n;
    cin >> n;

    int x;
    cin >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    cout << "Solution - " << searchInsert(arr, x) << el;
  }

  return 0;
}