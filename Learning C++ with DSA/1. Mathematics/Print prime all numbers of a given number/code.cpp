#include<bits/stdc++.h>
#include<vector>
using namespace std;

//NOTE more efficient way of using sieve of eratorthenes
//Time complexity - O(nloglogn)

void printPrimeNum(int n){
  vector<int> prime (n+1, true);
  for(int i = 2; i<=n; i++){
    if(prime[i]){
      cout<<i<<" ";
      for(int j = i*i; j<=n; j=j+i)
        prime[j] = false;
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n = 5;
  printPrimeNum(n);
  return 0;
}

/* NOTE Efficient solution using sieve of eratorthenes 

SECTION
void printPrimeNum(int n){
  vector<bool> prime (n+1, true);

  for(int i = 2 ; i*i<= n; i++){
    if(prime[i]){
      for(int j = 2*i; j <= n; j = j + i){
        prime[j] = false;
      }
    }
  }

  for (int i = 2; i <= n; i++){
    // cout<<"prime["<<(i)<<"] = "<<prime[i]<<endl;
    if(prime[i]) cout<<i<<" ";
  }
  

}
!SECTION

*/

/*NOTE Naive solution to print all prime numbers under N
Time complexity - O(n*sqrt(n));

SECTION code 👇
bool isPrime(int n){
  if(n == 2 || n == 3) return true;

  if((n % 2 == 0) || (n % 3 == 0)) return false;

  for(int i = 5; i*i <= n; i+=6){
    if((n % i == 0) || (n % (i+2) == 0)) return false;
  }
  return true;
}

void printPrimeNum(int n){
  for(int i = 2; i<=n ; i++){
    if(isPrime(i)) cout<<i<<" ";
  }
}
!SECTION code end👆
*/
