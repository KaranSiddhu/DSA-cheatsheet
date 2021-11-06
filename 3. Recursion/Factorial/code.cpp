#include <bits/stdc++.h>
using namespace std;
#define ll long long

int fact(int n, int k) {
	if(n <= 1) return k;
  
  return fact(n-1, n*k);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;

	cout<<fact(n, 1);

	return 0;
}
