#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

void leftRotate(int* arr, int n){
  int j = 1;
  for(int i = 0; j < n; i++){
    arr[i] = arr[i] + arr[j];
    arr[j] = arr[i] - arr[j];
    arr[i] = arr[i] - arr[j];
    j++;
  }

} 

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr)/sizeof(arr[0]);

  for(int i = 0; i < size; i++)
    cout << arr[i] << " ";

  leftRotate(arr, size);
  
  cout << el;
  for(int i = 0; i < size; i++)
    cout << arr[i] << " ";
  
  return 0;
}