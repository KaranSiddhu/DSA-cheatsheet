#include <bits/stdc++.h>
using namespace std;
#define ll long long

int maxNumOfCut(int n, int a, int b, int c) {
  if(n == 0) return 0;

  if(n <= -1) return -1;

  int res = max(maxNumOfCut(n-a, a, b, c),
  max(maxNumOfCut(n-b, a, b, c), maxNumOfCut(n-c, a, b, c)));

  if(res == -1) return -1;

  return (res+1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,a,b,c;
	cin>>n>>a>>b>>c;
	
  cout<<maxNumOfCut(n, a, b, c)<<"\n";
  
	return 0;
}
