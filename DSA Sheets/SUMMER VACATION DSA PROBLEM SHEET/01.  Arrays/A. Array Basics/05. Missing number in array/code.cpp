#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
1
5
1 2 3 5
*/

int missingNumber(vector<int>& a, int n) {
  sort(a.begin(), a.end());

  for (int i = 0; i < n; i++)
    if(a[i] != (i+1))
      return i+1;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--){
    int n;
    cin >> n;

    vector<int> arr(n-1);

    for (int i = 0; i < n-1; i++)
      cin >> arr[i];

    cout << "Solution - " << missingNumber(arr, n) << el;
    
  }

  return 0;
}