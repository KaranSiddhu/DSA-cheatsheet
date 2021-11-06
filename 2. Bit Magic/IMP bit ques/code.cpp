#include <bits/stdc++.h>
using namespace std;

//NOTE ques - Given array of n number that has values in range [1....n+1]. every number is appearing exactly once. Find the missing number

//Time complexity - O(n)

int missingNumFromArray(int a[], int n){
  
  int res = 0;

  for(int i = 1; i<=(n+1); i++){
    res = res ^ i;
  }
  
  for(int i = 0; i<n; i++){
    res = res ^ a[i];
  }
  
  return res;

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[] = {1, 5, 3, 2};
  int n = sizeof(a) / sizeof(a[0]);

  cout<<missingNumFromArray(a, n);

	return 0;
}
