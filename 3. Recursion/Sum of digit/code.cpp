#include <bits/stdc++.h>
using namespace std;
#define ll long long


int sumOfDigit(int n, int ans) {
  if (n == 0) return ans;

  ans = ans + (n % 10);

  return sumOfDigit(n/10, ans);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	
  cout<<sumOfDigit(n, 0);
  
	return 0;
}
