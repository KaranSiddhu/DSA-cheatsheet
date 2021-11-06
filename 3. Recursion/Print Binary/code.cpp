#include <bits/stdc++.h>
using namespace std;
#define ll long long

//NOTE Q) Printing binary
void printBinary(int n) {
  if(n == 0) return;

  printBinary(n/2);

  cout<<(n % 2)<<" ";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int n;
  cin>>n;

  printBinary(n);

	return 0;
}
