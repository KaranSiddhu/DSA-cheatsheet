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
3
1 2 3

Output:-
Union -> 5 

Explanation: 
Union set of arr1 and arr2 is [1, 2, 3, 4, 5]. So count is 5.
*/

int doUnion(int *a1, int l1, int *a2, int l2){
  int ans = 0, i = 0, j = 0;

  ans = l1 > l2 ? (l1 - l2) : (l2 - l1);

  while(i < l1 && j < l2){
    if(a1[i] < a2[j]){
      ans++;
      i++;
    }else if(a1[i] > a2[j]){
      ans++;
      j++;
    }else if(a1[i] == a2[j]){
      ans++;
      i++;
      j++;
    }
  }

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

    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    
    int m;
    cin >> m;

    int b[m];
    for (int i = 0; i < m; i++)
      cin >> b[i];
    
    cout << "Union -> " << doUnion(a, n, b, m);
    
    cout << el;
  }

  return 0;
}