#include <bits/stdc++.h>
using namespace std;

//NOTE In binary representation set bit is 1

//NOTE Ques - check if the kth bit is set bit or not

int checkSetBit(int n, int k){
  int mask = 1 << (k-1);
  
  if((n & mask) > 0)
    return 1;
  else 
    return 0;
    
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int n, k;
  cin>>n>>k;
  cout<<checkSetBit(n, k);

	return 0;
}
