#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) >= 'A' && S.at(i) <= 'Z') {
      cout << i + 1;
    }
  }
}
