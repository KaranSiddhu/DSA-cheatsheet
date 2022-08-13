#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
1
5
17
2 5 8 12 30

Output -
yes

*/

//Q - find pair sum in sorted array
// Time Complexity : O(n) 
// Auxiliary Space : O(1) 
string solution1(){
  int n, x;
  cin >> n >> x;
  
  int arr[n];
  for(int i = 0; i < n; i++)
    cin >> arr[i];
  
  int low = 0, high = n - 1;

  while(low <= high){
    int sum = arr[low] + arr[high];

    if(sum == x)
      return "Yes";
    else if(sum > x)
      high--;
    else
      low++;    
  }

  return "No";
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--){
    cout << solution1();
  }

  return 0;
}