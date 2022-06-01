#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ll long long
#define db double
#define ld long double

/*
1
12
0 1 1 0 1 2 1 2 0 0 0 1
*/

// Time Complexity: O(n)
// We are using Dutch National Flag Algorithm
void sortArr(int a[], int n){
  int low = 0, mid = 0, high = n - 1;

  while (mid <= high){
    if (a[mid] == 0)
      swap(a[low++], a[mid++]);

    else if (a[mid] == 1)
      mid++;

    else if (a[mid] == 2)
      swap(a[mid], a[high--]);
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];

    sortArr(a, n);

    cout << "\n"
         << "Solution - ";
    for (int i = 0; i < n; i++)
      cout << a[i] << " ";
    cout << "\n";
  }

  return 0;
}