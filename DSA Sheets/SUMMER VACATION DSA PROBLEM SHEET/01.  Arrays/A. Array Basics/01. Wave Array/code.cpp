#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double

/*
1
5
1 2 3 4 5
*/

//Time complexity: O(nlogn)
void convertToWave(int n, vector<int>& arr){
  for(int i = 0; i < n-1; i += 2){
    int temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = temp;
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
    
    vector<int> a(n);
    for(int i = 0; i < n; i++)
      cin >> a[i];
    
    convertToWave(n, a);

    cout << "\n" << "Solution - ";
    for(int i = 0; i < n; i++)
      cout << a[i] << " ";

    cout << "\n";
  }

  return 0;
}