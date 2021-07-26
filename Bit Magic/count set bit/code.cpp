#include <bits/stdc++.h>
using namespace std;

//NOTE count the total number of set bits in 'n'
//NOTE this approach is know as brian kerningams algorithm
//NOTE time complexity - O(set bit count in n)

int countSetBit(int n){
  int c = 0xff;

  while(n != 0){
    n = n & (n - 1);
    c++;
  }
  return c;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int n;
  cin>>n;
  cout<<countSetBit(n);

	return 0;
}
