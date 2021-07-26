#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
	if(n <= 1) 
		return n;

	int ans2 = fibo(n - 2);
	int ans1 = fibo(n - 1);

	return ( ans2 + ans1 );
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{

		cout<<fibo(i)<<" ";
	}
	
	
	return 0;
}
