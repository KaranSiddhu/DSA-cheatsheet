#include<bits/stdc++.h>
using namespace std;

// NOTE More Efficient way to print divisors
// Time complexity = O(sqrt(n));
//Prints all divisors in sorted order

void printDivisors(int n){
  vector<int> divisors; 
  vector<int>::iterator it;
  int i;
  for(i = 1; i*i < n; i++){
    if(n%i == 0)  divisors.push_back(i);
  }

  for( ; i >= 1; i--){
    if(n%i == 0) divisors.push_back(n/i);
  }

  it = unique(divisors.begin(), divisors.end());
  
  divisors.resize(distance(divisors.begin(), it));

  cout<<divisors.size()<<"\n";
  for (it = divisors.begin(); it != divisors.end(); it++)
        cout << *it << " ";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 15;
  printDivisors(n);

  return 0;
}

/*NOTE Efficient way to print divisors
Time complexity = O(sqrt(n));
This solution will now print divisors in sorted order
Approach - 
1 - divisors always appear in pairs
    30: (1, 30), (2, 15), (3, 10), (5, 6)

2 - one of the divisor in every pair is smaller than or equal to sqrt(n

SECTION code here👇
void printDivisors(int n){
  for(int i = 1; i*i<=n; i++){
    if(n % i == 0){
      cout<<i<<" ";
      if(i != n/i) cout<<n/i<<" ";
    }
  }
}
!SECTION code end👆
*/

/*NOTE navie solution to print divisors
Time complexity = O(n)

SECTION
void printDivisors(int n){
  for(int i = 1; i <= n; i++){
    if(n%i == 0) cout<<i<<" ";
  }
}
!SECTION
*/
