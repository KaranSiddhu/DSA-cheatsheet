#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
5
1 2 3 4 5
3
*/

//Iterative solution
// int binarySearch(int* arr, int l, int r, int x){
//   while(l <= r){
//     int mid = (l + r)/2;

//     if(arr[mid] == x)
//       return mid;
    
//     if(arr[mid] > x)
//       r = mid-1;
//     else
//       l = mid+1;
//   }

//   return -1;
// }

//Recursive solution
int binarySearch(int* arr, int l, int r, int x){
  int mid = (l + r)/2;

  if(l > r)
    return -1;
  
  if(arr[mid] == x)
    return mid;
  else if(arr[mid] > x)
    return binarySearch(arr, l, mid-1, x);
  else
    return binarySearch(arr, mid+1, r, x);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];  

  int x;
  cin >> x;

  cout << "Index - " << binarySearch(arr, 0, n-1, x);

  return 0;
}