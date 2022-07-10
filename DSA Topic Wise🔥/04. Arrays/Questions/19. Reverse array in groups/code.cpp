#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Input:-
1
5
3
1 2 3 4 5

Output:-
3 2 1 5 4
*/

void reverseInGroups(vector<ll> &arr, int n, int k){

  int left = 0, right=k-1;
  while(left < right){
    swap(arr[left], arr[right]);
    left++;
    right--;
  }
 
  left = k; right = n-1;
  while(left < right){
    swap(arr[left], arr[right]);
    left++;
    right--;
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--){
    int n;
    cin >> n;
    vector<ll> arr;
    int k;
    cin >> k;

    for (int i = 0; i < n; i++){
      ll x;
      cin >> x;
      arr.push_back(x);
    }

    reverseInGroups(arr, n, k);

    for (int i = 0; i < n; i++)
      cout << arr[i] << " ";

    cout << el;
  }

  return 0;
}

