#include <bits/stdc++.h>
using namespace std;
#define ll long long


//NOTE Q) printing from 1 to N 
//Time complexity - O(n);
//Auxiliary space - O(n);
/*
SECTION non tail recursive solution
void print1toN(int n) {
  if(n == 0) return;
  print1toN(n-1);
  cout<<n<<" ";
}
!SECTION
*/

//NOTE Tail recursive solution
void print1toN(int n, int k) {
  if(n == 0) return;
  cout<<k<<" ";
  print1toN(n-1, k+1);
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int n;
  cin>>n;

  print1toN(n,1);

	return 0;
}
