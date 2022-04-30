#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

bool secondLargestIndex(int* arr, int n){
  if(n == 1)
    return true;
  
  int a = arr[0];
  for(int i = 1; i < n; i++){
    if(a > arr[i])
      return false;
    a = arr[i];
  }
  return true;
} 

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  int arr[] = {100, 100};
  int size = sizeof(arr)/sizeof(arr[0]);

  cout << (secondLargestIndex(arr, size) ? "Sorted" : "Not sorted") << el;

  return 0;
}