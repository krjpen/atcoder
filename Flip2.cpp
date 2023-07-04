#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int a, b;

  for (int i = 0; i < S.size()-1; i++) {
    if (S.at(i) != S.at(i + 1)) {
      a = S.at(i);
      b = S.at(i + 1);
      break;
    }
  }

  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == a) {
      S.at(i) = b;
    } else {
      S.at(i) = a;
    }
  }

  cout << S << endl;
}
