#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b;
  cin >> a >> b;
  double c = b / a;
  c = c * pow(10, 3);
  c = round(c);
  c = c / pow(10, 3);
  
  string n = to_string(c);
  n.erase(n.begin()+5, n.end());
  
  cout << n;
}
