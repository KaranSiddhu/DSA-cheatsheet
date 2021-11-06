
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isSorted(int a[], int size){

  if(size <= 1) return true;

  if(a[0] > a[1]) return false;



  return isSorted(a+1, size-1);

}

int main() {
  int a[] = {2, 3, 4, 5, 6};
  int size = sizeof(a)/sizeof(a[0]);
 
  string ans = isSorted(a, size) ? "Array is Sorted" : "Array is not Sorted";

  cout << ans << "\n";

  return 0;
}
