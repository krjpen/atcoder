#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int k = a;
  int t = b;
  
  for (int i = 0; i < t-1; i++) {
    a *= k;
  }
  
  for (int i = 0; i < k-1; i++) {
    b *= t;
  }
  cout << a + b;
}
