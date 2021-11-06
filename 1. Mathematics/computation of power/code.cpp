#include<bits/stdc++.h>
#include<vector>
using namespace std;

//NOTE efficient solution
//Time complexity = O(log(n))

int power(int x, int n){
  if(n == 0) return 1;

  if(n%2 == 0)
    return power(x, n/2)*power(x, n/2);
  else
    return power(x, n-1)*x;
  
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x = 7,  n =100;
  cout<<power(x, n)<<endl;

  return 0;
}

/*NOTE naive solution
  Time complexity - O(n)
  SECTION
  int power(int x, int n){
    int ans = 1;
    for(int i = 0; i < n; i++){
      ans = ans * x;
    }
    return ans;
  }
  !SECTION
*/