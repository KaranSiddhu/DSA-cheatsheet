#include <bits/stdc++.h>
using namespace std;
#define ll long long


//NOTE Q) printing from N to 1 
//Time complexity - O(n);
//Auxiliary space - O(n);

int print1toN(int n) {
  if(n == 1) return 1;
  cout<<n<<" ";
  return print1toN(n-1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int n;
  cin>>n;

  cout<<print1toN(n)<<" ";

	return 0;
}
