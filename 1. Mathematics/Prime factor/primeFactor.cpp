#include <bits/stdc++.h>
using namespace std;


//NOTE There is a More efficient to find prime factors

//The previous solution was good but if the given number is a prime number then in that solution our loop will also run and thats totally useless

//Time complexity - O(under root of n) but in this solution no of iteration is less than the previous. The reason it it like this because of the worst case because when n is a prime num our while's inside of for loop will not run so thats why it is under root of n

//Approach - We can check for 2 and 3 separately with this we can save many iterations 

void primeFactors(int n){
  if(n <= 1) return;
  
  while(n % 2 == 0){
    cout<<"2 ";
    n=n/2;
  }

  while(n % 3 == 0){
    cout<<"3 ";
    n=n/3;
  }

  for(int i = 5; i*i <= n; i += 6){
    while(n % i == 0){
      cout<<i<<" ";
      n=n/5;
    }

    while(n % (i + 2) == 0){
      cout<<(i+2)<<" ";
      n=n/(i+2);
    }
  }
  if(n > 3) cout<<n<<" ";

}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 84;
  primeFactors(n);

  return 0;
}

/*NOTE Efficient solution to find prime factors
Time complexity = O(under root of n)
Approach - Just like we did in prime numbers, we know that divisor's always appear in pairs
30: (1, 30), (2, 15), (3, 10), (5, 6)

so we will just take underroot of the 'n' in our loop 

SECTION code here 👇

void primeFactors(int n){
  if(n <= 1) return;
  for(int i = 2; i*i <= n; i++){
    while(n % i == 0){
      cout<<i<<" ";
      n=n/i;
    }
  }
  if(n > 1) cout<<n;
} 

!SECTION code end 👆

*/

/*NOTE Navie solution to find prime factors of a number
  Time complexity = O(n^2 log(n))

  SECTION Code 👇
  bool isPrime(int n){
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if((n % 2 == 0) || (n % 3 == 0)) return false;
    for(int i = 5; i*i <= n; i += 6){
      if((n % i == 0) || (n % (i+2) == 0)) return false;
    }
    return true;
  }

  void primeFactors(int n){
    for(int i = 2; i<n; i++){
      if(isPrime(i)){
        int num = n;
        while(num % i == 0){
          cout<<i<<" ";
          num = num/i;
        }
      }
    }
  }
  !SECTION Code end 👆
*/
