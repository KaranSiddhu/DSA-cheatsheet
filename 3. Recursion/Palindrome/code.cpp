#include <bits/stdc++.h>
using namespace std;
#define ll long long


bool isPalin(string &n, int F, int L) {
  if(n.size() == 1) return true;
  
  if(n[F] != n[L]) return false;
  
  if(F < L) return isPalin(n, F+1, L-1); 

  return true; 
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  string n;
  cin>>n;

  int ans = isPalin(n, 0, n.length() - 1);

  ans ? cout<<"Given String is Palindrome."
      : cout<<"Given String is not Palindrome";


	return 0;
}
