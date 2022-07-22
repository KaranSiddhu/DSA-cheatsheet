#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

//Using Reversal Algorith
//time complexity -> O(n)
void reverseArray(int *arr, int start, int end){
  while (start < end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void leftRotateByD(int *arr, int n, int d){

  if (d == 0)
    return;

  // in case the d > n, 
  //when for Ex -> d = 3, n = 5 then d = 3 % 5 = 3
  //when for Ex -> d = 6, n = 5 then d = 6 % 5 = 1 
  d = d % n;

  reverseArray(arr, 0, d - 1);
  reverseArray(arr, d, n - 1);
  reverseArray(arr, 0, n - 1);
}

// Time Complexity -> O(n*d)
// void leftRotateByD(int* arr, int n, int d){
//   for(int k = 0; k < d; k++){
//     int j = 1;
//     for(int i = 0; j < n; i++){
//       arr[i] = arr[i] + arr[j];
//       arr[j] = arr[i] - arr[j];
//       arr[i] = arr[i] - arr[j];
//       j++;
//     }
//   }
// }

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";

  leftRotateByD(arr, size, 2);

  cout << el;
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";

  return 0;
}