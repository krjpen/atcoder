#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,d;
  cin >> a >> b >> d;
  int k = (b-a)/d;

  cout << a ;
  for(int i = 0; i < k; i++){
    a = a + d;
    cout << " " << a;
  }
}
