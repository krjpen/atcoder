#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n = 8;
  int a;
  bool x = true;
  vector<int> vec;
 
  for (int i = 0; i < n; i++) {
    cin >> a;
    vec.push_back(a);
  }
 
  for (int i = 0; i < n; i++) {
    if (!(100 <= vec.at(i) && vec.at(i) <= 675)) {
      x = false;
    }
  }
 
  for (int i = 0; i < n; i++) {
    if (vec.at(i) % 25 != 0) {
      x = false;
    }
  }
 
  for (int i = 0; i < n - 1; i++) {
    if (vec.at(i) > vec.at(i + 1)) {
      x = false;
    }
  }
 
  if (x == true) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
