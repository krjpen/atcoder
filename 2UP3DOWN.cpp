#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  if(x>y){
    if(x-y>3) cout << "No";
    else cout << "Yes";
  }
  else{
    if(y-x>2) cout << "No";
    else cout << "Yes";
  }
}
