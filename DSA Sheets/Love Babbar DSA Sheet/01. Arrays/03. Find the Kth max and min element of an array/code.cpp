#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Input:-
1
6
7 10 4 3 20 15
3

Output:-
kth Min element - 7
kth Max element - 10
*/ 

//Time complexity - O(n log n)
void kthMinAndMax(int *arr, int start, int end, int k){
  
  sort(arr, arr+(end+1));

  cout << k << " Min element - " << arr[k-1] << el;
  cout << k << " Max element - " << arr[end - (k-1)] << el;

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

    int k;
    cin >> k;

    kthMinAndMax(arr, 0, n-1, k);
    
    cout << el;
  }

  return 0;
}