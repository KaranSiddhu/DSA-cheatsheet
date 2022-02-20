#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

void solution(){
  int n, x;
  cin >> n >> x;

  int arr[n];
  for(int i = 0; i < n; i++)
    cin >> arr[i];

  int max = x;
  for(int i = 0; i < n; i++){
    x += arr[i];
    
    if(x > max)
      max = x;
  }

  cout<< max << el;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while(t--)
    solution();
  
  return 0;
}