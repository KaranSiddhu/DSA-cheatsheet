#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
1
5
12
1 2 3 7 5

1
10
15
1 2 3 4 5 6 7 8 9 10
*/

// Time Complexity: O(N)
vector<int> subarraySum(int arr[], int n, long long s){
  vector<int> ans;

  int l = 0, r = 0, sum = 0;

  while (r < n){
    sum += arr[r];

    // We use while because sum can be much greater than s and we may have to subtract l index multiple time
    while (sum > s)
      sum -= arr[l++];

    if (sum == s){
      ans.push_back(l + 1);
      ans.push_back(r + 1);
      return ans;
    }
    r++;
  }
  ans.push_back(-1);
  return ans;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--){
    int n, s;
    cin >> n >> s;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    vector<int> ans = subarraySum(arr, n, s);

    cout << "Solution - ";
    for (int i = 0; i < ans.size(); i++)
      cout << ans[i] << " ";

    cout << "\n";
  }

  return 0;
}