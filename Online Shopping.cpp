#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s, k, p, q;
  cin >> n >> s >> k;
  int z = 0;
  for(int i = 0; i < n; i++){
    cin >> p >> q;
    z += (p * q);
  }

  if(z < s){
    cout << (z + k);
  }
  else{
    cout << z;
  }

  
}
