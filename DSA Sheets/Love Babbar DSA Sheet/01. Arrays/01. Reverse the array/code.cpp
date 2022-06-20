#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Input:-
1
4
4 5 1 2

Output:-
2 1 5 4
*/

/*
Iterative approach - 
Time Complexity : O(n)
*/
void solution(int *arr, int n){
  int start = 0, end = n-1;  
  while(start < end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
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

    cout << "Solution - ";
    
    for (int i = 0; i < n; i++)
      cout << arr[i] << " "; 
    
    cout << el;
  }

  return 0;
}