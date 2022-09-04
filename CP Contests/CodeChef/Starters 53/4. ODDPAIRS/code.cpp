#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

void solution(long long n){
     long long start = 1, end = n;
    
    long long oddCount = (end - start)/2 + 1;
    
    long long evenCount = (end - start + 1) - oddCount;

    long long oddPairCount = ((oddCount*evenCount) + (oddCount*evenCount));
    cout  << oddPairCount  << el;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while(t--){
    long long n;
    cin >> n;
    solution(n);
  
  }
    
  return 0;
}