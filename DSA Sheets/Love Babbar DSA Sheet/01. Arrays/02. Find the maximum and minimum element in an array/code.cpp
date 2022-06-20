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
1000 11 445 1 330 3000

Output:-
Min element - 1
Max element - 3000
*/

/*
Linear search approach

Time Complexity: O(n)
Auxiliary Space: O(1)

*/
void solution(int *arr, int n){
  int min = arr[0], max = arr[1];
  
  for (int i = 0; i < n; i++){
    if(min > arr[i])
      min = arr[i];
    
    if(max < arr[i])
      max = arr[i];
  }
  
  cout << "Min Element - " << min << el;
  cout << "Max Element - " << max;
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