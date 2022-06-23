#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Input:-
1
11
1 1 2 2 3 3 4 4 4 4 5
4
5

Output:-
4
*/

//Time Complexity: O(n)
int majorityWins(int *arr, int n, int x, int y){
  int c1=0,c2=0, ans = 0;

  for (int i = 0; i < n; i++){
    if(arr[i] == x) c1++;
    else if(arr[i] == y) c2++; 
  }
  
  if(c1 == c2)
    ans = (x>y ? y : x);
  else
    ans = (c1>c2 ? x: y);
  
  return ans;
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

    int x, y;
    cin >> x >> y;

    cout << "Solution - " << majorityWins(arr, n, x, y) << el;
  }

  return 0;
}