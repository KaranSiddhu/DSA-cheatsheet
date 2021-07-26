#include <bits/stdc++.h>
using namespace std;

//NOTE bitwise solution using Brian kerningams algorithm
// Time complexity - O(1)  
bool isPowerOfTwo(int n){
  if(n == 0) return false;
 
  return ((n & (n-1)) == 0);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
  cin>>n;
  int ans = isPowerOfTwo(n); 
  cout<<(ans == 1 ? "True" : "False");
	
  return 0;
}


/*
Time complexity - O(1)
SECTION
bool isPowerOfTwo(int n){
  if(n == 0) return false;
  if(n == 1) return true;
  if(n == 2) return true;
  if((n % 2 == 0) && (n % 4 == 0))
    return true;

  return false;
}
!SECTION
*/