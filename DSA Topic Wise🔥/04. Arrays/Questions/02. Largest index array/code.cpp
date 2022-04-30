#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

int largestIndex(int* arr, int n){
  
  int ans = 0;
  for(int i = 0; i < n; i++)
    if(arr[ans] < arr[i])
      ans = i;   
    
  return ans;
} 

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

 
  int arr[] = {3, 8, 12, 5, 6};

  cout << largestIndex(arr, 5);

  return 0;
}