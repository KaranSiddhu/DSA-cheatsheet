#include <bits/stdc++.h>
using namespace std;
#define ll long long

//NOTE Q) Sum of N natural numbers
//Time complexity - O(n)
//Axuilary space - O(1)

int sumOfN(int n, int ans) {
  if(n == 0) return ans;

  return sumOfN(n-1, ans+n); 
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	
  cout<<sumOfN(n, 0);

	return 0;
}
