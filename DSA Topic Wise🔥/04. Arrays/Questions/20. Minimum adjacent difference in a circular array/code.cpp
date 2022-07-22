#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
8 -8 9 -9 10 -11 12
*/

void solution(int *arr, int n)
{
  // Your Code Here!!

  int ans = abs(arr[0] - arr[1]);

  int r = 2;
  for (int i = 1; i < n; i++){
    int res = abs(arr[i] - arr[r]);
    if (ans > res)
      ans = res;
    r++;
  }

  ans = min(ans, abs(arr[n - 1] - arr[0]));

  cout << "MIN - " << ans;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    solution(arr, n);
  }

  return 0;
}