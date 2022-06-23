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
1 2 3 4 5
90

Output:-
1 2 3 4 5 90
*/

void insertAtEnd(int *arr, int n, int e){
  arr[n-1] = e;
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
    
    int e;
    cin >> e;

    insertAtEnd(arr, n, e);

    cout << "Solution - ";
    
    for (int i = 0; i < n; i++)
      cout << arr[i] << " "; 
    
    cout << el;
  }

  return 0;
}