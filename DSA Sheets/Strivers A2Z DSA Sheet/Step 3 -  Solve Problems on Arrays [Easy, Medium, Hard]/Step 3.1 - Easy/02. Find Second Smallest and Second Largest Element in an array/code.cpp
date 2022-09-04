#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Input -
1
6
1 2 4 7 7 5

Output -
Second Smallest : 2
Second Largest : 5

*/

void solution(int *arr, int n){
  if(n < 2){
    cout << -1 << el;
    return;
  }

  int max = INT_MIN, secondMax = INT_MIN;
  int min = INT_MAX, secondMin = INT_MAX;

  for(int i = 0; i < n; i++){
    if(arr[i] > max)  
      max = arr[i];

    if(arr[i] < min)
      min = arr[i];
  }  

  for(int i = 0; i < n; i++){
    if(arr[i] > secondMax && arr[i] != max)
      secondMax = arr[i];
    
    if(arr[i] < secondMin && arr[i] != min)
      secondMin = arr[i];
  }

  cout << "Second max = " << secondMax << el;
  cout << "Second min = " << secondMin << el;
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
  }

  return 0;
}