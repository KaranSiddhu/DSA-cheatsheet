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
1 2 2 3 4 5

Output:-
2 2 3 4 5
*/

void solution(int *arr, int n){
  int temp = 0;
  for (int i = 1; i < n; i++){
    if(arr[temp] > arr[i]) cout << arr[temp] << " ";
    else cout << arr[i] << " ";

    temp++;
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

    cout << el;
  }

  return 0;
}