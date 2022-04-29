#include <bits/stdc++.h>

using namespace std;

//NOTE time complexity - o(log n)

int countZero(int n){
  int count = 0;
  for(int i=5; i<=n; i *= 5)
    count = count + n/i;
  return count;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 100;
  cout<< countZero(n);  
  return 0;
}
