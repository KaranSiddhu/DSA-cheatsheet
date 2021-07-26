#include <bits/stdc++.h>

using namespace std;

//NOTE there is more efficient way to find a prime number
//Time complexity O()
//Approach - we are already checking for 1 in our if condition we can do 2 more checks like this which is (n%2==0) and (n%3==0), if we did this check then we can save many iteration in our loop because now we can avoid multiple of 2 and 3 in our loop

bool isPrime(int n){
  if(n == 1) return false;

  if(n == 2 || n == 3) return true;

  if((n%2 == 0) || (n%3 == 0)) return false;

  for(int i = 5; i*i<=n; i = i+6){
    if((n % i == 0) || (n % (i+2) == 0)) return false;
  }
  
  return true;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 121; 
  isPrime(n) ? 
    (cout<<"Yes, "<<n<<" is prime") : 
    (cout<<"No, "<<n<<" is not prime");
  return 0;
}

/* NOTE Efficient solution to find a prime number 
  Time complexity is O(under root of n)
  Divisors always appear in pairs
  30: (1, 30), (2, 15), (3, 10)

  in short hum log bs given number ka root kr le ge loop ki condition mai
  SECTION code👇 
  bool isPrime(int n){
    if(n == 1) return false;

    for(int i = 2; i*i <= n; i++){
      if(n % i == 0) return false;
    }
    return true;
}
  !SECTION code end👆
*/

/*NOTE Naive solution to find a prime number
  Time complexity = O(n);

  SECTION code👇 
  bool isPrime(int n){
    if(n == 1) return false;
    
    for(int i = 2; i<n; i++)
      if(n % i == 0) return false;
    
    return true;
  }
  !SECTION code end👆
*/