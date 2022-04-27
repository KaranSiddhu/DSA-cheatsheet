#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define ld long double
#define el "\n"

void solution(){
    int x,y;
    cin >> x >> y;

    if((x * 3) <= (y * 2)){
      cout << (x*3) << "\n";
    }else{
      cout << (y*2) << "\n";
    }



}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solution();

    return 0;
}
