#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  int c;
  cin >> n >> a >> b;

  for(int i=0; i<n; i++){
    cin >> c;
    if(a+b == c){
      cout << i+1 << endl;
      break;
    }
  }
}
