#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

/*
Input:-
1
5
1 2 19 28 5

Output:-
11 5
*/

//Time Complexity: O(nlog(n))
int median(int A[],int N){      
  sort(A,A+N);

  int ans = 0, i = N/2;

  if(N % 2 == 0)
    ans = floor((A[i] + A[i-1])/2);
  else
    ans = A[i];
   
  return ans;
}

int mean(int A[],int N){
  int sum = 0;
  for (int i = 0; i < N; i++)
    sum += A[i];
  
  return (sum/N);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    cout << "Median - " << median(arr, n) << el;
    cout << "Mean - " << mean(arr, n) << el;
  }

  return 0;
}