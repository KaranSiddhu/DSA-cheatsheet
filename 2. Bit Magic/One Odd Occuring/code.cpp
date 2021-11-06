#include <bits/stdc++.h>
using namespace std;

//NOTE time complexity - O(n)
int oneOddOccuring(int a[], int n){
  int res = 0;
  for(int i = 0; i < n; i++)
    res = res ^ a[i];
  
  return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[] = {1, 2, 3, 2, 3, 1, 3};
  int n = sizeof(a) / sizeof(a[0]);

  cout<<oneOddOccuring(a, n);

	return 0;
}
