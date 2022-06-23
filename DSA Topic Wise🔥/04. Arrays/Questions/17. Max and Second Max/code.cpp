#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Input:-


Output:-

*/

//Time Complexity: 
vector<int> solution(int *arr, int n){
  int max = INT_MIN, max2= INT_MIN;

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

    vector<int> v = solution(arr, n);

    cout << "Solution - " << v[0] << " " << v[1] << el;
    
  }

  return 0;
}