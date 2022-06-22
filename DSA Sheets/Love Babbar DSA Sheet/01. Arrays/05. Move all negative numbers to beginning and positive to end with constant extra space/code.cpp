#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Input:-
1
9
-12 11 -13 -5 6 -7 5 -3 -6

Output:-
-12 -13 -5 -7 -3 -6 11 6 5 (Numbers order does not matter)
*/

//Time complexity: O(N)
//We are using Dutch National Flag Algorithm
void solution(int *arr, int n){
  int low = 0, high = n-1;

  while(low <= high){
    if(arr[low] < 0)
      low++;
    else if(arr[high] > 0)
      high--;
    else 
      swap(arr[low], arr[high]);
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

    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    
    solution(arr, n);

    cout << "Solution -> ";
    
    for (int i = 0; i < n; i++)
      cout << arr[i] << " "; 
    
    cout << el;
  }

  return 0;
}