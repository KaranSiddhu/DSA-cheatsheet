#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*Ques - Write a program to reverse an array or string
I/O - 
  4
  1 2 3 4
O/P -
  Before - 1 2 3 4 
  After - 4 3 2 1
*/

/*NOTE Solution 1 -> Iterative way
Time complexity - O(n)

void solution(int *arr, int start, int end){
  while(start < end){
    arr[start] = arr[start] ^ arr[end];
    arr[end] = arr[start] ^ arr[end];
    arr[start] = arr[start] ^ arr[end];
    start++;
    end--;
  }
}
*/

//NOTE Soltion 2 -> Recusive way
//Time complexity - O(n)
void solution(int *arr, int start, int end){
  if(start >= end)
    return;

  arr[start] = arr[start] ^ arr[end];
  arr[end] = arr[start] ^ arr[end];
  arr[start] = arr[start] ^ arr[end];

  solution(arr, start+1, end - 1);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int *arr = new int[n];

  for (int i = 0; i < n; i++)
    cin >> arr[i];
  
  cout << "Before - ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  
  solution(arr, 0, n-1);

  cout << "\n";

  cout << "After - ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

  delete [] arr;

  return 0;
}