#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

// NOTE Efficient way to find LCM is using a formula
// a*b = gcd(a,b)*lcm(a,b)
// so lcm(a,b) = a*b / gcd(a,b)
// Time complexity = O(log(min(n1, n2))) 

int calGCD(int n1, int n2){
  if(n2==0) return n1;

  return calGCD(n2, n1%n2);
}

int calLCM(int n1, int n2){
  return (n1*n2)/calGCD(n1,n2);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n1=10, n2=30;
  cout<<"LCM of "<<n1<<" and "<<n2<<" = "<<calLCM(n1,n2);
  
  return 0;
}

/*
NOTE Naive solution to find LCM of two numbers
Time complexity of Naive solution is O(max(n1, n2))

SECTION Code👇
int calLCM(int n1, int n2){
  int res = max(n1,n2);
  while (true){
    if((res % n1 == 0) && (res % n2 == 0)) return res;
    res++;
  }
  return res;
}
!SECTION Code end👆
*/
