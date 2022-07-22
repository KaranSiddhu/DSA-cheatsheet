#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Input -
3
5
1 5 3 8 12
7
100 180 260 310 40 535 695
10
23 13 25 29 33 19 34 45 65 67
11
886 2777 6915 7793 8335 5386 492 6649 1421 2362 27

Output -
13
*/

void solution(int *arr, int n)
{
  // int profit = 0;

  // for (int i = 1; i < n; i++)
  //   if(arr[i] > arr[i-1])
  //     profit += (arr[i] - arr[i-1]);

  // cout << profit;

  int i = 0;
  for (; i < n; i++){
    int buy = 0, sell = 0;

    while (i < n-1 && arr[i + 1] <= arr[i]) // 1 5 3 8 12
      i++;

    if(i == n - 1) 
      break;

    buy = i;

    while (i < n-1 && arr[i + 1] >= arr[i])
      i++;

    sell = i;

    cout << "Buy -> " << buy << " , Sell -> " << sell << el;
  }
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

    cout << el;
  }

  return 0;
}