#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

int secondLargestIndex(int* arr, int n){
  
  int largest = 0;
  for(int i = 0; i < n; i++)
    if(arr[largest] < arr[i])
      largest = i;   
  
  int ans = 0;
  for(int i = 0; i < n; i++)
    if(arr[i] != arr[largest])
      if(arr[ans] < arr[i])
        ans = i;

  return ans;
} 

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

 
  int arr[] = {5, 20, 12, 20, 10};

  cout << secondLargestIndex(arr, 5);

  return 0;
}