#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

int removeDuplicate(int* arr, int n){

  int res = 1;
  for(int i = 1; i < n; i++){
    if(arr[i] != arr[res-1]){
      arr[res] = arr[i];
      res++;
    }
  }

  return res;
} 

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  int arr[] = {1, 1, 2, 2, 2, 3,3 };
  int size = sizeof(arr)/sizeof(arr[0]);

  for(int i = 0; i < size; i++)
    cout << arr[i] << " ";

  cout << el;
  for(int i = 0; i < removeDuplicate(arr, size); i++)
    cout << arr[i] << " ";

  return 0;
}