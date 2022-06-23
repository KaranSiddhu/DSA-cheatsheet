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
2
90

Output:-
1 2 90 3 4 5
*/

//Time Complexity: O(n)
void insertAtIndex(int *arr, int n, int index, int e){

  for (int i = n-1; i > index; i--)
    arr[i] = arr[i-1]; 
  
  arr[index] = e;

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
    for (int i = 0; i < n-1; i++)
      cin >> arr[i];

    int index,ele;
    cin >> index >> ele;

    insertAtIndex(arr, n, index, ele);

    cout << "Solution - ";
    for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
    cout << el;
  }

  return 0;
}