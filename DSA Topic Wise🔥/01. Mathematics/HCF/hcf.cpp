#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

//NOTE optimize Euclidean Algo solution
// Time complexity of Euclidean Algo is O(log(min(n1, n2)))
int calHcf (int n1, int n2){
  if(n2 == 0) return n1;
  
  return calHcf(n2, n1 % n2);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n1=12, n2=15;
  int hcf = calHcf(n1, n2);
  cout<<"HCF of "<<n1<<" and "<<n2<<" = "<<hcf;

  return 0;
}

/* 
NOTE Finding HCF using Euclidean Algo
Euclidean Algorithm formula - 
  hcf(n1, n2) = hcf(n1-n2, n2) (if n1>n2) or hcf(n1, n2-n1) (if n2>n1)

SECTION here is one of the way to apply euclidean algo👇
int calHcf (int n1, int n2){
  while(n1 != n2){
    if(n1 > n2){
      n1 = n1 - n2;
    }else{
      n2 = n2 - n1;
    }
  }
  return n1;
}
!SECTION code end here

*/



/*
NOTE This is the naive solution to find HCF/GCD
Time complexity - O(min(n1, n2))

SECTION Code of naive solution 👇
int calHcf (int n1, int n2){
  int res = min(n1, n2);

  while(res > 0){
    if((n1 % res == 0) && (n2 % res == 0))
      break;

    res--;
  }

  return res;
}
!SECTION Code ends here
*/
