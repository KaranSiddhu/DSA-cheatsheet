#include <bits/stdc++.h>
using namespace std;
#define ll long long

//NOTE Searching using recursion
//Time complexity - O(n)
//Auixilary space - O(n)

bool findN(int arr[], int X, int L, int U) {

  //NOTE L is lower bound, U is Upper bound

  if(U < 1) return false;

  if(arr[L] == X) return true;

  if(arr[U] == X) return true; 

  return findN(arr, X, L + 1, U - 1);

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[] = {1, 2, 3, 4, 5};

  int size = sizeof(arr)/sizeof(arr[0]);
  
  int x = 1;
  
  bool ans = findN(arr, x, 0, (size - 1));

  ans ? cout<<"Element "<<x<<" is present.\n" 
      : cout<<"Element "<<x<<" is not present.\n";


	return 0;
}
