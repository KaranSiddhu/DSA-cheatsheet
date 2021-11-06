
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sum(int a[], int n) {

  
  if(n <= 0) return 0;

  return (sum(a, n-1) + a[n - 1]);
}


int main() {
  int a[] = {4, 2, 1};
  int size = sizeof(a)/sizeof(a[0]);

  cout << sum(a, size) << "\n";

  return 0;
}
