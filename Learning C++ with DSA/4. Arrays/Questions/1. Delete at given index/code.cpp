#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

void deleteAtIndex(int* arr, int n, int x){
  int i;
  for(i =0; i< n; i++)
    if(arr[i] == x)
      break;
  
  if(i == n)
    return;
  
  for(int j = i; j < n-1; j++)
    arr[j] = arr[j+1];
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

 
  int arr[] = {3, 8, 12, 5, 6};

  for(int i =0; i< 5; i++)
    cout << arr[i] << " ";

  deleteAtIndex(arr, 5, 12);

  cout << el;
  for(int i =0; i< 5; i++)
    cout << arr[i] << " ";

  return 0;
}