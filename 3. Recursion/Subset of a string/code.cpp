#include <bits/stdc++.h>
using namespace std;
#define ll long long

void subset(string &s, string ans = "", int i = 0) {
  if(i == s.length()) {
    cout<<"\""<<ans<<"\""<<", ";
    return;
  } 

  subset(s, ans, i+1);
  subset(s, ans + s[i], i+1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin>>s;
	
  subset(s);
  
	return 0;
}
