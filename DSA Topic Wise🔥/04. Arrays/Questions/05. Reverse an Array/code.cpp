#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

void reverse(int* arr, int n){

  int lastIndex = n-1;
  for(int i = 0; i < lastIndex; i++){
    int temp = arr[i];
    arr[i] = arr[lastIndex];
    arr[lastIndex] = temp;
    lastIndex--;
  }
} 

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  int arr[] = {10, 5, 7, 30};
  int size = sizeof(arr)/sizeof(arr[0]);

  for(int i = 0; i < size; i++)
    cout << arr[i] << " ";

  reverse(arr, size);

  cout << el;
  for(int i = 0; i < size; i++)
    cout << arr[i] << " ";

  return 0;
}