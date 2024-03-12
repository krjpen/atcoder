#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int counter = 0;

  for (int i = 0; i < s.length(); i++) {
    if (s.at(i) <= 90) {
      counter++;
    }
  }

  if (counter == 1) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}
