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
1 2 3 4 5

Output:-
5 4 
*/

//Time Complexity: O(n)
vector<int> solution(int *arr, int n){
  int max = arr[0], max2= -1;
  vector<int> ans;

  for (int i = 0; i < n; i++){
    if(arr[i] > max){
      max2 = max;
      max = arr[i];
    }else if(arr[i] < max && max2 < arr[i])
      max2 = arr[i];
  }

  ans.push_back(max);
  ans.push_back(max2);

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

    vector<int> ans = solution(arr, n);

    cout << "Max -> " << ans[0] << ", 2nd Max -> " << ans[1] << el;
    
  }

  return 0;
}