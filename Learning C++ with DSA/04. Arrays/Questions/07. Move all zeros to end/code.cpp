#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

void moveZeroToEnd(int* arr, int n){
  int res = 0;
  for (int i = 0; i < n; i++)  {
    if(arr[i] != 0){
      swap(arr[i],arr[res]);
      res++;
    }
  }
  
} 

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  int arr[] = {8, 5, 0, 10, 0, 20};
  int size = sizeof(arr)/sizeof(arr[0]);

  for(int i = 0; i < size; i++)
    cout << arr[i] << " ";

  moveZeroToEnd(arr, size);
  
  cout << el;
  for(int i = 0; i < size; i++)
    cout << arr[i] << " ";
  
  return 0;
}